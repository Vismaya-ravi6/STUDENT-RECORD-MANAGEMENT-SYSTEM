#include"student.h"
void deleteall(struct student **p)
{
        if(*p==0)
        {
                printf("no records to delete\n");
                return;
        }
        struct student *del=*p;
        while(del)
        {
                *p=del->next;
                free(del);
                del=*p;
        }
        printf("all nodes deleted successfully\n");
}

