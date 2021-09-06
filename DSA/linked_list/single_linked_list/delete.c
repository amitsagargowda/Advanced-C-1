#include"header.c"
void delete(ST **ptr,int n)
{
	ST *temp = *ptr;
	ST *prv;
	while(temp != 0)
	{
		if(temp->roll == n)
		{
			if(temp == *ptr)
			*ptr = temp->next;
			else
			prv->next = temp->next;

			free(temp);
			temp = NULL;
			return;
		}
		else {
		prv = temp;
		temp = temp->next;
		}
	}
	  printf("The data doesn't found to delete\n");
}

