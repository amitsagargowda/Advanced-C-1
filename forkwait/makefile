CC = gcc
FLAGS = -g -O0 -o

a.out : wait_example wait_example2 wait_macros

%.o : %.c
	$(CC) $(FLAGS) $^
clean :
	rm -rf *.o a.out
