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

		
1. **_-D name_**
```
		Predefine name as macro, with definition 1.

Eg : 
#include<stdio.h>
int main()
{
	printf("Value : %d",CONST);	/* CONST value is declared in the program */
	return 0;
}		 

Compilation : gcc -o main main.c -DCONST=20    /*  CONST value is declared as 20 during compilation time */

Observation :  If -DCONST is not used, the following error occurs
		error: ‘CONST’ undeclared (first use in this function)   
                   4 |  printf("Value : %d",CONST);   
                     |                      ^~~~~      
               main.c:4:22: note: each undeclared identifier is reported only once for each function it appears in

Output : Value : 20

```

2. **_-include file_**
```
		Process file as if "#include "file"" appeared as the first line of the primary source file.  However, 
		the first directory searched for file is the preprocessor's working directory instead of the directory 
		containing the main source file.  If not found there, it is searched for in the remainder of the 
		"#include "..."" search chain as normal.
Eg :

/* header files are not included */
int main()
{
	printf("Value : %d",CONST);
	return 0;
}

Compilation : gcc -o main main.c -include stdio.h

Observation : If -include is not used, the following error occurs
		main.c: In function ‘main’: 
                main.c:4:2: warning: implicit declaration of function ‘printf’ [-Wimplicit-function-declaration] 
                    4 |  printf("Value : %d",CONST);    
                      |  ^~~~~~  

Output : Value : 20

```	
