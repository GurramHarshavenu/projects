#include"header.h"
void stud_show(struct st* ptr)
{
        printf("-----------------------------------------\n");
        printf("| roll  |name           |marks          |\n");
        printf("|---------------------------------------|\n");
        while(ptr!=0)
        {
        printf("|%d	|%s		| %f	|\n",ptr->roll,ptr->name,ptr->marks);
                ptr=ptr->next;
        }

        printf("-----------------------------------------\n");
}
