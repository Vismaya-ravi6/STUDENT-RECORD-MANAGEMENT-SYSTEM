#include"student.h"
void free_mem(struct student **p)
{
        struct student *t;
        while(*p)
        {
                t=*p;
                *p=(*p)->next;
                free(t);
        }
}
