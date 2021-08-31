all : forkpid_example forkpid_example1 multiple_forkpid

forkpid_example : forkpid_example.c  
	cc-g -O0 -o forkpid_example forkpid_example.c  

forkpid_example1 : forkpid_example1.c
	cc-g -O0 -o forkpid_example1 forkpid_example1.c

multiple_forkpid : multiple_forkpid.c
	cc-g -O0 -o multiple_forkpid multiple_forkpid.c

clean :
	rm -rf *.o forkpid_example forkpid_example1 multiple_forkpid 
