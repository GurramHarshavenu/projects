#include"header.h"
void save(struct st *ptr)
{
    char i;
    FILE *fp;

    printf("Do you want to truncate old data or join with old data (w/a)? ");
    scanf(" %c",&i);   // <-- FIX: read user choice

    if(i=='w' || i=='W')
        fp = fopen("student.dat","w");
    else if(i=='a' || i=='A')
        fp = fopen("student.dat","a");
    else
    {
        printf("Invalid choice!\n");
        return;
    }

    if(fp == NULL)
    {
        printf("Error opening file!\n");
        return;
    }

    while(ptr != 0)
    {
        fprintf(fp,"%d  %s  %f\n", ptr->roll, ptr->name, ptr->marks);
        ptr = ptr->next;
    }

    fclose(fp);
}
