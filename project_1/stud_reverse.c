#include"header.h"
void reverse(struct st*p)
{
        /*if(p->next!=0)
                reverse(p->next);*/
        struct st *a[5];
        int i=0;
        while(p!=0)
        {
                a[i++]=p;
                p=p->next;
        }
        printf("-----------------------------------------\n");
        printf("| roll  |name           |marks          |\n");
        printf("-----------------------------------------\n");
        for(i=i-1;i>=0;i--)
        {
        printf("|%d     |%s             | %f     |\n",a[i]->roll,a[i]->name,a[i]->marks);
        }

        printf("-----------------------------------------\n");

}
