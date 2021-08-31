all : atexit_example atexit_example2 multiple_atexit

atexit_example : atexit_example.c
	gcc -g -O0 -o atexit_example atexit_example.c

atexit_example2 : atexit_example2.c     
	gcc -g -O0 -o atexit_example2 atexit_example2.c 

multiple_atexit : multiple_atexit.c
	gcc -g -O0 multiple_atexit multiple_atexit.c


clean :
	rm -rf *.o atexit_example.c atexit_example2 multiple_atexit
