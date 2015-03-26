testList: testList.o list.o
	gcc -o testList testList.o list.o
	

testList.o: testList.c list.h
	gcc -c -o testList.o testList.c

list.o: list.h list.c
	gcc -c -o list.o list.c
