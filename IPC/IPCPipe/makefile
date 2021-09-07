CC = gcc
FLAGS = -g -O0 -o

all : pipe_sample pipe_fork pipe_file_open

%.o : %.c
	$(CC) $(FLAGS) $^

clean :	
	rm -rf *.o pipe_sample pipe_fork pipe_file_open
