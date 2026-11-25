#include"student.h"
void modify(struct student **p)
{
        struct student *s,*d;
        int op,rn,flag=0,c,r;
        float f;
        char n[20],old[20];
        s=*p;
        if(*p==0)
        {
                printf("no records found to modify \n");
                return ;
        }
        printf("enter your choice to search for record to modify \n");
        printf("1.roll num \n 2. name\n 3. percentage \n");
        scanf("%d",&op);
        if(op==1)
        {
                printf("enter roll num to search \n");
                scanf("%d",&rn);
                while(s)
                {
                        if(rn==s->rollno)
                        {
                                flag=1;
                                printf(" current details of the entered roll num rn:%d name:%s perct:%f\n",s->rollno,s->name,s->percentage);
                                printf("enter updated name and percenatge \n");
                                printf("enter name:\n");
                                scanf("%s",n);
                                printf("enter percen:\n");
                                scanf("%f",&f);
                                while(f<0 || f>100)
                                {
                                        printf("inavlid percentage : enter again\n");
                                        scanf("%f",&f);
                                }
                                strcpy(s->name,n);
                                s->percentage=f;
                                printf("updated successfully\n");
                        }
                        if(flag==1)
                                break;
                        s=s->next;
                }
                if(flag==0)
                        printf("entered roll num not found\n");
        }
        if(op==2)
        {
                printf("enter the name to search \n");
                scanf("%s",old);
                c=0;
                s=*p;
                while(s)
                {
                        if(strcmp(s->name,old)==0)
                        {
                                c++;
                                //printf("current available records matching to name :rn:%d  name:%s  per:%f\n",s->rollno,s->name,s->percentage);
                        }
                        s=s->next;
                }
                if(c==0)
                        printf("no matching name found\n");
                else
                {
                        if(c==1)
                        {
                                s=*p;
                                /*printf("enter updated name and percentage\n");
                                  scanf("%s%f",n,&f);*/
                                while(s && strcmp(s->name,old)!=0)
                                        s=s->next;
                        }
                        else
                        {
                                printf("more than one record found matching to the name plz select the roll num of the name to modify \n");
                                scanf("%d",&r);
                                s=*p;
                                while(s)
                                {
                                        if(r==s->rollno && (strcmp(s->name,old)==0))
                                                break;
                                        s=s->next;
                                }}
                        if(s==0)
                                printf("rocrd not found\n");
                        else
                        {
                                printf(" current details of the entered roll num rn:%d name:%s perct:%f\n",s->rollno,s->name,s->percentage);
                                printf("enter updated name and percenatge \n");
                                printf("enter name:\n");
                                scanf("%s",n);
                                printf("enter percentage :\n");
                                scanf("%f",&f);
                                while(f<0 || f>100)
                                {
                                        printf("inavlid percentage : enter again\n");
                                        scanf("%f",&f);
                                }
                                strcpy(s->name,n);
                                s->percentage=f;
                                printf("updated successfully\n");
                        }
                }
        }
        // %
        float old_f;
        if(op==3)
        {
                printf("enter the percentage to search \n");
                scanf("%f",&old_f);
                c=0;
                s=*p;
                while(s)
                {
                        if(s->percentage==old_f)
                        {
                                c++;
                                //printf("current available records matching to name :rn:%d  name:%s  per:%f\n",s->rollno,s->name,s->percentage);
                        }
                        s=s->next;
                }
                if(c==0)
                        printf("no matching percentage found\n");
                else
                {
                        if(c==1)
                        {
                                s=*p;
                                while(s && s->percentage!=old_f)
                                        s=s->next;
                        }
                        else
                        {
                                printf("more than one record found matching to the percenatge plz select the roll num of the percentage to modify \n");
                                scanf("%d",&r);
                                s=*p;
                                while(s)
                                {
                                        if(r==s->rollno && s->percentage==old_f)
                                                break;
                                        s=s->next;
                                }}
                        if(s==0)
                                printf("record not found\n");
                        else
                        {
                                printf(" current details of the entered roll num rn:%d name:%s perct:%f\n",s->rollno,s->name,s->percentage);
                                printf("enter updated name and percenatge \n");
                                printf("enter name:\n");
                                scanf("%s",n);
                                printf("enter percentage:\n");
                                scanf("%f",&f);
                                while(f<0 || f>100)
                                {
                                        printf("inavlid percentage : enter again\n");
                                        scanf("%f",&f);
                                }
                                strcpy(s->name,n);
                                s->percentage=f;
                                printf("updated successfully\n");
                        }
                }
        }
}
