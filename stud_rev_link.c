#include"student.h"
void rev_link(struct student **p)
{
        if(*p==0)
        {
                printf("no records found to rev\n");
                return;
        }
        int i,c;
        c=count(*p);
        if(c>1)
        {
                struct student **a;
                a=malloc(sizeof(struct student *)*c);
                struct student *t;
                t=*p;
                for(i=0;i<c;i++)
                {
                        a[i]=t;
                        t=t->next;
                }
                for(i=c-1;i>0;i--)
                        a[i]->next=a[i-1];
                a[0]->next=0;
                *p=a[c-1];
        }
        printf("nodes reversed successfully\n");
}
