**ATEXIT()**

The function pointed by atexit() is automatically called without arguments when the program terminates normally. 
In case more than one function has been specified by different calls to the atexit() function, all are executed in 
the order of a stack (i.e. the last function specified is the first to be executed at exit). A single function can be
registered to be executed at exit more than once. 


1. atexit_example

This program shows the basic working of atexit(). When atexit handler is called in the main function, the compiler 
moves to the out function.


2. atexit_example2

This program is as same as that of the previous program. Here we have static method which returns nothing.


3.  
