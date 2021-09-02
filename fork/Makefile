CC = gcc
FLAGS = -g -O0 -o
SOURCES = sample_fork fork_child_parent multiple_fork fork_pid fork_file

all : $(SOURCES)

%.o : %.c
	$(CC) $(FLAGS) $^

clean : 
	rm -rf *.o SOURCES
