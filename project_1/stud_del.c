#include"header.h"
void show_(struct st*ptr);
void stud_del(struct st**ptr)
{
	char op,s;
	char m[20];
	int i=0;
	int n;
	struct st*temp,*prev,*original;
	printf("--------------------------\n");
	printf("| DELETE RECORD MENU     |\n");
	printf("--------------------------\n");
	printf("| R/r:Roll no based      |\n");
	printf("| N/n:Name based         |\n");
	printf("--------------------------\n");
	scanf(" %c",&op);
	if((op=='R')||(op=='r'))
	{
		printf("Enter the roll no:\n");
		scanf(" %d",&n);
		temp=*ptr;
		while(temp!=0)
		{
			if(temp->roll==n)
			{
				show_(temp);
				printf("do you want to delete Y/y:\n");
				scanf(" %c",&s);
				if((s=='y')||(s=='Y'))
				{
					temp->name[0]='\0';
					temp->marks=0;
					printf("data is deleted\n");
					return;
				}
				else
				{
					printf("node doesnt delete\n");
					return;
				}
			}
			else
			{
				prev=temp;
				temp=temp->next;
			}
		}
	}
	if((op=='N')||(op=='n'))
	{
		printf("Enter the name:\n");
		scanf(" %s",m);
		temp=*ptr;
		while(temp!=0)
		{
			if(strcmp(temp->name,m)==0)
			{
				show_(temp);
				i++;
				original=temp;
				prev=temp;
				temp=temp->next;
			}
			else
			{
				prev=temp;
				temp=temp->next;
			}
		}
		if(i==1)
		{
			printf("do you want to delete Y/y:\n");
			scanf(" %c",&s);
			if((s=='y')||(s=='Y'))
			{
				original->name[0]='\0';
				original->marks=0;
				printf("data is deleted\n");
				return;
			}
			else
			{
				printf("data is does'nt deleted\n");
				return;
			}
		}
		else
		{
			printf("--------------------------\n");
			printf("| DELETE RECORD MENU     |\n");
			printf("--------------------------\n");
			printf("| R/r:Roll no based      |\n");
			printf("--------------------------\n");
			printf("Enter the role \n");
			scanf("%d",&n);
			temp=*ptr;
			while(temp!=0)
			{
				if(temp->roll==n)
				{
					show_(temp);
					printf("do you want to delete Y/y:\n");
					scanf(" %c",&s);
					if((s=='y')||(s=='Y'))
					{
						temp->name[0]='\0';
						temp->marks=0;
						printf("data is deleted\n");
						return;
					}
					else
					{
						printf("node doesnt delete\n");
						return;
					}
				}
				else
				{
					prev=temp;
					temp=temp->next;
				}
			}

		}
	}
}


void show_(struct st *ptr)
{
	printf("-------------------------------------\n");
	printf("|roll   |name		|marks      |\n");
	printf("------------------------------------|\n");
	printf("|%d	|%s		| %f	|\n",ptr->roll,ptr->name,ptr->marks);
	printf("-------------------------------------\n");
}
