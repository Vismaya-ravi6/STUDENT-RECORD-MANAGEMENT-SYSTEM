#include "student.h"
int main()
{
        struct student *hp=0;
        load(&hp);
        char choice,e;
        int ch;
        while(1)
        {
                printf("\n ******** STUDENT RECORD MENU ******** \n");
                printf("a/A : Add new record\n");
                printf("d/D : Delete a record\n");
                printf("s/S : Show the list\n");
                printf("m/M : Modify a record\n");
                printf("v/V : Save records\n");
                printf("t/T : Sort the list\n");
                printf("l/L : Delete all records\n");
                printf("r/R : Reverse the list\n");
                printf("e/E : Exit:save and exit or exit without save\n");
                printf("enter your choice :\n");
                scanf(" %c",&choice);
                ch = (int)choice;

                if (ch >= 65 && ch <= 90)
                {
                        ch = ch + 32;
                }

                switch(ch)
                {
                        case 97:add_student(&hp);
                                break;
                        case 115:show_list(hp);
                                 break;
                        case 100:delet_rec(&hp);
                                 break;
                        case 109:modify(&hp);
                                 break;
                        case 118:save(hp);
                                 break;
                        case 116:sort(hp);
                                 break;
                        case 108:deleteall(&hp);
                                 break;
                        case 114:rev_link(&hp);
                                 break;
                        case 101:printf("s: save and exit\n e:exit\n");
                                 scanf(" %c",&e);
                                 if(e=='s')
                                 {
                                         save(hp);
                                         free_mem(&hp);
                                         printf("saved successfully\n");
                                         exit(0);
                                 }
                                 else if(e=='e')
                                 {
                                         free_mem(&hp);
                                         exit(0);
                                 }
                                 else
                                         printf("invalid choice \n");
                                 break;
                        default:printf("invalid choice please enter correct choice\n");
                }
        }
        return 0;
}
