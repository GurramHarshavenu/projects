#include"header.h"
void shows(struct st*);
void modify(struct st*ptr)
{

        int n,i=0;
        char m[20];
        float f;
        struct st *temp=ptr,*original,*prev;
        char op;
        printf("--------------------------\n");
        printf("| MODIFY RECORD MENU     |\n");
        printf("|------------------------|\n");
        printf("| N/n:name based         |\n");
        printf("| R/r:Roll number based  |\n");
        printf("--------------------------\n");
        printf("Enter the option\n");
        scanf(" %c",&op);
        if((op=='R')||(op=='r'))
        {
                printf("Enter the roll no:\n");
                scanf(" %d",&n);
                temp=ptr;
                while(temp!=0)
                {
                        if(temp->roll==n)
                        {
                                shows(temp);
                                printf("do you want to modify Y/y:\n");
                                scanf(" %c",&op);
                                if((op=='y')||(op=='Y'))
                                {

                                          printf("--------------------------\n");
                                          printf("| You want Modify        |\n");
                                          printf("|------------------------|\n");
                                          printf("| N/n:Name               |\n");
                                          printf("| P/p:percentage         |\n");
					  printf("| G/g:Name and Percentage|\n");
                                          printf("--------------------------\n");
                                          printf("Enter the option\n");
                                          scanf(" %c",&op);
                                           if((op=='N')||(op=='n')||(op=='G')||(op=='g'))
                                                  {
                                                  printf("Enter the name\n");
                                                 scanf("%s",m);
                                                 strcpy(temp->name,m);
                                                  }
                                           if((op=='P')||(op=='p')||(op=='G')||(op=='g'))
                                                   {
                                                   printf("Enter the percentage\n");
                                                   scanf("%f",&f);
                                                   temp->marks=f;
                                                   }
                                           else
                                           {
                                                   printf("Invalid option\n");
                                                   return;
                                           }
                                printf("data is modified\n");
				shows(temp);
                                return;

                                }
                                else
                                {
                                        printf("node doesnt modify\n");
                                        return;
                                }
                        }
                        else
                        {
                                prev=temp;
                                temp=temp->next;
                        }
                }


                        printf("roll no doesn't match\n");
                        return;
        }
 if((op=='N')||(op=='n'))
        {
                printf("Enter the name:\n");
                scanf(" %s",m);
                temp=ptr;
                while(temp!=0)
                {
                        if(strcmp(temp->name,m)==0)
                        {
                                shows(temp);
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
                           printf("do you want to modify Y/y:\n");
                           scanf(" %c",&op);
                           if((op=='y')||(op=='Y'))
                                {
                                         printf("--------------------------\n");
                                          printf("| You want Modify        |\n");
                                          printf("|------------------------|\n");
                                          printf("| P/p:percentage         |\n");
                                          printf("| N/n:name               |\n");
					  printf("| G/g:Name and Percentage|\n");
                                          printf("--------------------------\n");
                                          printf("Enter the option\n");
                                          scanf(" %c",&op);

                                           if((op=='N')||(op=='n')||(op=='G')||(op=='g'))
                                                  {
                                                  printf("Enter the name\n");
                                                  scanf("%s",m);
                                                 strcpy(original->name,m);
                                                  }
                                           if((op=='P')||(op=='p')||(op=='G')||(op=='g'))
                                                   {
                                                   printf("Enter the percentage\n");
                                                   scanf("%f",&f);
                                                   original->marks=f;
                                                   }
                                           else
                                                  {
                                                          printf("Invalid option\n");
                                                          return;
                                                  }
                                printf("data is modified\n");
				shows(temp);
                                return;

                                }
                        else
                                printf("data is does'nt modified\n");
                }
                else if(i>0)
                        modify(ptr);
                else
                {
                        printf("Name doesn't match\n");
                        return;
                }
        }
        else
                return;
}
void shows(struct st *ptr)
{
        printf("-------------------------------\n");
        printf("|roll   |name     |marks      |\n");
        printf("-------------------------------\n");
        printf("|%d      |%s       | %f  |\n",ptr->roll,ptr->name,ptr->marks);
        printf("-------------------------------\n");
}
