#include"header.h"
void sort(struct st*ptr)
{
        int i=0,j,n;
        struct st *p=ptr,*temp;
        while(p!=0)
        {       i++;
                p=p->next;
        }
        struct st **a;
        a=(struct st**)malloc(i*sizeof(struct st*));
        n=i;
        for(i=0;i<n;i++)
        {
                a[i]=ptr;
                ptr=ptr->next;
        }
        char op;
        printf("--------------------------\n");
        printf("| SORT RECORD MENU       |\n");
        printf("--------------------------\n");
        printf("| N/n:name based         |\n");
        printf("| P/p:percentage based   |\n");
        printf("--------------------------\n");
        printf("Enter the option\n");
        scanf(" %c",&op);
        if((op=='N')||(op=='n'))
        {
                for(i=0;i<n-1;i++)
                {
                        for(j=i+1;j<n;j++)
                        {
                                if((strcmp(a[i]->name,a[j]->name))>0)
                                {

                                        temp=a[i];
                                        a[i]=a[j];
                                        a[j]=temp;
                                        }
                                }
                        }

        }
       else if((op=='P')||(op=='p'))
        {
                for(i=0;i<n-1;i++)
                {
                        for(j=i+1;j<n;j++)
                        {
                                if((a[i]->marks)>(a[j]->marks))
                                {
                                        temp=a[i];
                                        a[i]=a[j];
                                        a[j]=temp;
                                }
                        }
                }
        }
        else
        {
                printf("Invalid option\n");
                return;
        }
        printf("-----------------------------------------\n");
        printf("| roll  |name           |marks          |\n");
        printf("|---------------------------------------|\n");
        for(i=0;i<n;i++)
        {
        printf("|%d     |%s           | %f     |\n",a[i]->roll,a[i]->name,a[i]->marks);
        }
        printf("----------------------------------------\n");

}
