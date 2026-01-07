#include"header.h"
void delete_all(struct st**ptr)
{
         struct st *temp;
           while(*ptr !=0)
          {
             temp=*ptr;
             *ptr=temp->next;
             free(temp);
          }

}
