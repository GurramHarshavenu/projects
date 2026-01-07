#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct st
{
    int roll;
    char name[20];
    float marks;
    struct st *next;
}ST;

void stud_add(struct st**);
void stud_del(struct st**);
void stud_show(struct st*);
void modify(struct st*);
void save(struct st*);
void exit_(struct st*);
void sort(struct st*);
void delete_all(struct st**);
void reverse(struct st*);
