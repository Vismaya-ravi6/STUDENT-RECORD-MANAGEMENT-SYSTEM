#include "student.h"
void show_list(struct student *p)
{
        if(p==0)
        {
                printf("no list found\n");
                return ;
        }
        while(p)
        {
                printf("%d %s %f\n",p->rollno,p->name,p->percentage);
                p=p->next;
        }
}
