#ifndef STUDENT_H
#define STUDENT_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student
{
    int rollno;
    char name[50];
    float percentage;
    struct student *next;
};
void add_student(struct student **);
void show_list(struct student *);
void delet_rec(struct student **);
void modify(struct student **);
void save(struct student *);
void load(struct student **);
int count(struct student *);
void sort(struct student *);
void deleteall(struct student **);
void rev_link(struct student **);
void free_mem(struct student **);
#endif
