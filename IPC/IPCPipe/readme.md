**PIPE**

		Pipe is a communication medium between two or more related or interrelated processes. It can be 
		either within one process or a communication between the child and the parent processes. Communication 
		can also be multi-level such as communication between the parent, the child and the grand-child, etc. 
		Communication is achieved by one process writing into the pipe and other reading from the pipe. 
		To achieve the pipe system call, create two files, one to write into the file and another to read 
		from the file.

**pipe_sample.c** - <a href = "">code</a>

		This program contains basic example of pipe and its operation.


**pipe_fork.c** - <a href = "">code</a>

		This program contains how pipe is invoked with fork() system call.


**pipe_file_open.c** - <a href = "">code</a>

		This program contains how pipe() system call is opened in file.
