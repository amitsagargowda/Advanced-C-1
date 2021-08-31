all : sample_fork fork_child_parent multiple_fork fork_pid fork_file

sample_fork : sample_fork.c
	cc -g -O0 -o sample_fork sample_fork.c

fork_child_parent : fork_child_parent.c
	cc -g -O0 -o fork_child_parent fork_child_parent.c

multiple_fork : multiple_fork.c   
	cc -g -O0 -o multiple_fork multiple_fork.c

fork_pid : fork_pid.c 
	cc -g -O0 -o fork_pid fork_pid.c

fork_file : fork_file.c           
	cc -g -O0 -o fork_file fork_file.c

clean : 
	rm -rf *.o sample_fork fork_child_parent multiple_fork fork_pid fork_file
