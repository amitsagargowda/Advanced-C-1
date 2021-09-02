CC = gcc

FLAGS = -g -O0 -o

a.out : atexit_example atexit_example2 multiple_atexit

%.o : %.c
	$(CC) $(FLAGS) $^

clean :
	rm -rf *.o out
