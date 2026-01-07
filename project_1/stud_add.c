#include"header.h"
void stud_add(struct st**ptr)
{
                char op;
        do{
        static int r=1;
        struct st*temp,*prev,*P,*last,*temp1;
        temp1=*ptr;
	while(temp1!=0)
        {

        if(temp1->name[0]=='\0')
        {       printf("Enter the details (name marks)\n");
                scanf("%s %f",temp1->name,&temp1->marks);

		printf("Enter the option to add node or not (y/n)\n");
        	scanf(" %c",&op);

		if(op=='y')
                	return stud_add(ptr);
		else
			return;
        }
        else
                temp1=temp1->next;
        }
        temp=(struct st*)malloc(sizeof(struct st));
        printf("Enter the details (name marks)\n");
        scanf("%s%f",temp->name,&temp->marks);
        temp->roll=r++;
        if((*ptr==0)||(((*ptr)->roll)>(temp->roll)))
        {
                temp->next=*ptr;
                *ptr=temp;
        }
        else
        {
                last=*ptr;

                while((last->next!=0)&&(((last->next->roll)<(temp->roll))))
                        last=last->next;
                temp->next=last->next;
                last->next=temp;
                }

        printf("Enter the option to add node or not (y/n)\n");
        scanf(" %c",&op);

        }while(op=='y');
}

