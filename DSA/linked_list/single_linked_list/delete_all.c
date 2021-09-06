#include"header.c"
void delete_all(ST **ptr)
{
	ST *temp = *ptr;
	while(*ptr != 0)
	{
		*ptr = temp->next;
		free(temp);
		temp = *ptr;
	}
}
