#include"header.h"
void exit_(struct st*ptr)
{
        char op;
        printf("-----------------------------\n");
        printf("| S/s:Save and exit         |\n");
        printf("| E/e:Exit without saving   |\n");
        printf("-----------------------------\n");
        printf("Enter the option\n");
        scanf(" %c",&op);
        if((op=='S')||(op=='s'))
        {
                save(ptr);
                return;
        }
        else if((op=='E')||(op=='e'))
        {
                return;
        }
}
