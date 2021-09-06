#include"header.c"

void add_begin(ST **ptr)
{
    ST *temp;
    temp = (ST*)malloc(sizeof(ST));
    printf("Enter the roll,name & marks\n");
    scanf("%d%s%f",&temp->roll,temp->name,&temp->marks);

    temp->prv = 0;
    temp->next = *ptr;
	
    if(*ptr != 0)
    (*ptr)->prv = temp;

    *ptr = temp;
}
