#include"header.c"
void print(ST *ptr)
{
	if(ptr == 0) {
	printf("linked list is empty...\n");
	return;
	}

	while(ptr != 0) {
	printf("%d %s %f\n",ptr->roll,ptr->name,ptr->marks);
	ptr = ptr->next;
	}
}
