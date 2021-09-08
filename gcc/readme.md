**GCC**

		GCC stands for GNU Compiler Collections which is used to compile mainly C and C++ language. 
		It can also be used to compile Objective C and Objective C++. The most important option required 
		while compiling a source code file is the name of the source program, rest every argument is optional 
		like a warning, debugging, linking libraries, object file etc.

		The different stages of gcc command allows the user to stop the compilation process at different stages.
				
			1. Preprocessing stage [ Removal of comments, Expansion of macros, etc,. ] -> filename.i
			2. Compiling stage [ produce intermediate compiled output file ] -> filename.s
			3. Assembly stage [ existing code is converted into machine language ] -> filename.o
			4. Linker stage [all the linking of function are done ] -> filename


**GCC Options**

		When you invoke GCC, it normally does preprocessing, compilation, assembly and linking.  
		The "overall options" allow you to stop this process at an intermediate stage.  For example, the 
		-c option says not to run the linker.  Then the output consists of object files output by 
		the assembler.


				-c  -S  -E  -o file  -x language -v  -###
           			--help[=class[,...]]  --target-help  --version
           			-pass-exit-codes  -pipe  -specs=file  -wrapper @file
           			-ffile-prefix-map=old=new -fplugin=file
           			-fplugin-arg-name=arg -fdump-ada-spec[-slim]
           			-fada-spec-parent=unit  -fdump-go-spec=file

		'-include file' : process file as if #include "file" appeared as the first line of the primary 
				source code.

		-D name : it will Predefine name as a macro, with definition 1.

		-D name = definition : it will predefine name as macro and intialize with definition.

		-shared : gcc -shared generates the shared object file for shared library.

		-pthreads : Define additional macros required for using the POSIX threads library.
					**gcc -shared filename.c -o filename**

		-pipe : use pipes rather than temparary files for communication between the variour stages of 
			compilation.

		-o opt : This will compile the source.c file but instead of giving default name hence executed 
			 using ./opt, it will give output file as opt. -o is for output file option.
					**gcc source.c -c option**

		-Werror : This will compile the source and show the warning if any error is there in the program, 
			  -W is for giving warnings.
					**gcc source.c -Werror -o opt**

		-Wall : This will check not only for errors but also for all kinds warning like unused variables 
			errors, it is good practice to use this flag while compiling the code.
					**gcc source.c -Wall -o opt**

		-ggdb3 : This command give us permissions to debug the program using gdb which will be described 
			 later, -g option is for debugging.
					**gcc -ggdb3 source.c -Wall -o opt**

		-lm : This command link math.h library to our source file, -l option is used for linking particular 
		      library, for math.h we use -lm.
					**gcc -Wall source.c -o opt -lm**

		-std=c11 : This command will use the c11 version of standards for compiling the source.c program, 
			   which allows to define variable under loop initializations also using newer standards 
			   version is preferred.
					**gcc -Wall -std=c11 source.c -o opt**

		-c : This command compile the program and give the object file as output, which is used to make 
		     libraries.
		
		-v : This option is used for the verbose purpose.
