#include"header.c"

void rev_print(ST *ptr)
{
	while(ptr->next != 0)
	ptr = ptr->next;

	while(ptr != 0) {
	printf("%d %s %f\n",ptr->roll,ptr->name,ptr->marks);
	ptr = ptr->prv;
	}
}
