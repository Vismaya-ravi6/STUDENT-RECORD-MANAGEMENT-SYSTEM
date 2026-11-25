#include"student.h"
void sort(struct student *p)
{
        char ch;
        printf("enter your choice to sort on what basis\n");
        printf("n:sort with name \n p:sort with percentage\n");
        scanf(" %c",&ch);
        if(p==0)
        {
                printf("no records found\n");
                return;
        }
        int i,h,c,j;
        c=count(p);
        struct student *p1;
        struct student *p2;
        struct student t;
        p1=p;
        if(ch=='n')
        {
                for(i=0;i<c-1;i++)
                {
                        p2=p1->next;
                        for(j=0;j<c-i-1;j++)
                        {
                                if(strcmp(p1->name,p2->name)>0)
                                {
                                        t.rollno=p1->rollno;
                                        strcpy(t.name,p1->name);
                                        t.percentage=p1->percentage;

                                        p1->rollno=p2->rollno;
                                        strcpy(p1->name,p2->name);
                                        p1->percentage=p2->percentage;

                                        p2->rollno=t.rollno;
                                        strcpy(p2->name,t.name);
                                        p2->percentage=t.percentage;
                                }
                                p2=p2->next;
                        }
                        p1=p1->next;
                }
                printf("sorted successfully\n");
        }
        else if(ch=='p')
        {
                for(i=0;i<c-1;i++)
                {
                        p2=p1->next;
                        for(j=0;j<c-i-1;j++)
                        {
                                if(p1->percentage<p2->percentage)
                                {
                                        t.rollno=p1->rollno;
                                        strcpy(t.name,p1->name);
                                        t.percentage=p1->percentage;

                                        p1->rollno=p2->rollno;
                                        strcpy(p1->name,p2->name);
                                        p1->percentage=p2->percentage;

                                        p2->rollno=t.rollno;
                                        strcpy(p2->name,t.name);
                                        p2->percentage=t.percentage;
                                }
                                p2=p2->next;
                        }
                        p1=p1->next;
                }
                printf("sorted successfully\n");
        }
        else
                printf("inalid option entered\n");
}
int count(struct student *p)
{
        int c=0;
        while(p)
        {
                c++;
                p=p->next;
        }
        return c;
}

