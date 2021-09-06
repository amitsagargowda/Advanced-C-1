#include"header.c"
int main()
{
	char ch;
	ST *hptr = 0;

	do{
	add_begin(&hptr);
	//add_end(&hptr);
	//add_middle(&hptr);
	printf("Do u want to add another record(y/n)\n");	       
        scanf(" %c",&ch);
	}while((ch=='y')||(ch=='Y')); 

	print(hptr);
	int c = count(hptr);
	printf("no.of nodes : %d\n",c);
	save(hptr);
}



