CC = gcc
Flags = -Werror -Wextra -Wall

PLOT_TEST: ALL

ALL: file.o functions.o
	$(CC) $(Flags) file.o functions.o -o ALL

file.o: file.c 
	$(CC) $(Flags) -c file.c -o file.o

functions.o: functions.c 
	$(CC) $(Flags) -c functions.c -o functions.o

clean:
	rm *.o