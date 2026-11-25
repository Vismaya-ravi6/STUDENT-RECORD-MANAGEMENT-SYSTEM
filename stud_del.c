#include "student.h"
void delet_rec(struct student **p)
{
        struct student *del;
        struct student *pvs;
        if(*p==0)
        {
                printf("no records found in list ! list is empty\n");
                return;
        }
        char choice;
        int r,c=0,rn;
        char s[50];
        printf("enter your choice to delete\n");
        printf(" R/r : Enter roll number to delete\n N/n : Enter name to delete\n");
        scanf(" %c",&choice);
        del=*p;
        pvs=*p;
        if(choice == 'r' || choice =='R')
        {
                printf("enter the roll num to delet the record \n");
                scanf("%d",&r);
                while(del)
                {
                        if(del->rollno==r)
                        {
                                if(del==*p)
                                        *p=del->next;
                                else
                                        pvs->next=del->next;
                                free(del);
                                printf("---------record deleted successfully----------\n");
                                return;
                        }
                        pvs=del;
                        del=del->next;
                }
                printf("record deleted successfully\n");
        }
        // name
        else if (choice == 'n' || choice == 'N')
        {
                printf("enter the name to delet the record \n");
                scanf("%s",s);
                while(del)
                {
                        if(strcmp(del->name,s)==0)
                        {
                                printf("%d %s %f\n",del->rollno,del->name,del->percentage);
                                c++;
                        }
                        del=del->next;
                }
                // 1st case
                if(c == 0)
                {
                        printf("Student name not found\n");
                        return;
                }
                // 2nd case
                if(c > 1)
                {
                        printf("Multiple records found. Enter roll number to delete: ");
                        scanf("%d", &rn);
                }
                else
                {
                        del = *p;
                        while(del)
                        {
                                if(strcmp(del->name, s) == 0)
                                {
                                        rn = del->rollno;
                                        break;
                                }
                                del = del->next;
                        }
                }
                // Delete selected record using roll number
                del = *p;
                pvs = 0;
                while(del != NULL)
                {
                        if(del->rollno == rn && strcmp(del->name, s) == 0)
                        {
                                if(del == *p)
                                        *p = del->next;
                                else
                                        pvs->next = del->next;

                                free(del);

                                printf("Record deleted successfully\n");
                                return;
                        }
                        pvs = del;
                        del = del->next;
                }

                printf("Invalid roll number for this name\n");
        }
        else
        {
                printf("Entered wrong choice\n");
        }
}







