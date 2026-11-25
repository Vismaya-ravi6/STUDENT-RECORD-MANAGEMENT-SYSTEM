# Student Record Management System

## Project Description
A menu-driven Student Record Management System developed using C programming. It uses a Singly Linked List to manage student records and file handling to save and load student data.

## Features
- Add new student records with automatically assigned unique roll numbers.
- Delete records by roll number or name.
- Display all student records.
- Modify student details by roll number, name or percentage.
- Save and load student records using file handling.
- Sort records alphabetically by name.
- Sort records by percentage in descending order.
- Delete all student records.
- Reverse the singly linked list.
- Save and exit or exit without saving.
- Release dynamically allocated memory before program termination.
- Input validation for student details.

## File Description

`stud_main.c` : Main function and menu operations.  
`stud_add.c` :Adds new student records.
`stud_del.c` :Deletes records by roll number or name. 
`stud_del_all.c` : Deletes all student records. 
`stud_mod.c`: Modifies student details. 
`stud_save.c` :Saves and loads student records.
`stud_show.c` :Displays student records. 
`stud_sort.c` :sorts records by name or percentage.
`stud_rev_link.c`: Reverses the linked list.
`free_memo.c` : Releases dynamically allocated memory.
`student.h` :Contains structure definition and function declarations. 
`Makefile`: Compiles source files and creates the executable. 
`student.dat` :Stores student records. 

## Compilation
```bash
make
```

## Execution
```bash
./student
```

## Clean
```bash
make clean
```

## Concepts Used
- C Programming
- Structures and Pointers
- Singly Linked List
- Dynamic Memory Allocation
- File Handling
- Searching and Sorting
- Dynamic Memory Allocation
- File Handling
- Searching and Sorting
