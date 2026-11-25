#include "student.h"
void add_student(struct student **p)
{
        printf("\n******add student record*****\n");
        struct student *new,*t;
        t=*p;
        new=malloc(sizeof(struct student));
        if(new==0)
        {
                printf("memory not allocated\n");
                return;
        }
        int rn=1,f;
        // checking roll num;
        if(*p==0)
        {
                new->rollno=rn;
        }
        else
        {
                while(1)
                {
                        f=0;
                        t=*p;
                        while(t!=0)
                        {
                                if(t->rollno==rn)
                                {
                                        f=1;
                                        break;
                                }
                                t=t->next;
                        }
                        if(f==0)
                                break;
                        rn++;
                }
                new->rollno=rn;
        }
        printf("Roll number found: %d\n", rn);
        //reading data from user
        printf("enter student name :\n");
        scanf("%s",new->name);
        printf("enter percentage:\n");
        scanf("%f",&new->percentage);
        while(new->percentage<0||new->percentage>100)
        {
                printf("invalid percentage ,enter again\n");
                scanf("%f",&new->percentage);
        }
        new->next=0;
        if(*p==0)
        {
                *p=new;
        }
        else
        {
                t=*p;
                while(t->next)
                        t=t->next;
                t->next=new;
        }
        printf("\n student data added successfully \n");
        printf("roll num assigned is : %d\n",rn);

}
