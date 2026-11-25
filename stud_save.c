#include"student.h"
void save(struct student *p)
{
        struct student *s;
        s=p;
        FILE *fp=fopen("student.data","w");
        while(s)
        {
                fprintf(fp,"%d %s %f\n",s->rollno,s->name,s->percentage);
                s=s->next;
        }
        fclose(fp);
}
void load(struct student **p)
{
        struct student *new;
        FILE *fp=fopen("student.data","r");
        if(fp==0)
        {
                printf("no file present so cant laod the data to nodes \n");
                printf("list is empty\n");
                return;
        }
        while(1)
        {
                new=malloc(sizeof(struct student));
                if(fscanf(fp,"%d%s%f",&new->rollno,new->name,&new->percentage)==-1)
                        break;
                new->next=0;
                if(*p==0)
                        *p=new;
                else
                {
                        struct student *last=*p;
                        while(last->next)
                                last=last->next;
                        last->next=new;
                }
        }
        printf("data loaded to node successfully\n");
}

