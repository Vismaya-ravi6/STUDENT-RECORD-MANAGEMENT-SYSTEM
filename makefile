student: stud_main.o stud_add.o stud_del.o stud_del_all.o stud_mod.o stud_save.o stud_show.o stud_sort.o stud_rev_link.o free_memo.o
	gcc stud_main.o stud_add.o stud_del.o stud_del_all.o stud_mod.o stud_save.o stud_show.o stud_sort.o stud_rev_link.o free_memo.o -o student

stud_main.o: stud_main.c student.h
	gcc -c stud_main.c

stud_add.o: stud_add.c student.h
	gcc -c stud_add.c

stud_del.o: stud_del.c student.h
	gcc -c stud_del.c

stud_del_all.o: stud_del_all.c student.h
	gcc -c stud_del_all.c

stud_mod.o: stud_mod.c student.h
	gcc -c stud_mod.c

stud_save.o: stud_save.c student.h
	gcc -c stud_save.c

stud_show.o: stud_show.c student.h
	gcc -c stud_show.c

stud_sort.o: stud_sort.c student.h
	gcc -c stud_sort.c

stud_rev_link.o: stud_rev_link.c student.h
	gcc -c stud_rev_link.c

free_memo.o: free_memo.c student.h
	gcc -c free_memo.c

clean:
	 @echo "cleaning up..."
	 rm -f *.o student
