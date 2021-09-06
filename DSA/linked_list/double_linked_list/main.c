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

	printf("reverse print...\n");
	rev_print(hptr);

/*
	printf("after reversing the data...\n");
	rev_data(hptr);
	print(hptr);
*/
/*
	int c = count(hptr);
	printf("no.of nodes : %d\n",c);
	save(hptr);
*/
/*
	printf("after reversing the links...\n");
	rev_links(&hptr);
	print(hptr);
*/
/*
	int roll;
	printf("Enter the roll to delete\n");
	scanf("%d",&roll);
	delete(&hptr,roll);
	printf("After delete a node\n");
	print(hptr);
*/
/*
	printf("After deletion of all nodes\n");
	delete_all(&hptr);
	print(hptr);
*/
}



