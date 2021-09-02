CC = gcc
FLAGS = -g -O0 -o

all : forkpid_example forkpid_example1 multiple_forkpid

%.o : %.c
	$(CC) $(FLAGS) $^

clean :
	rm -rf *.o forkpid_example forkpid_example1 multiple_forkpid 
