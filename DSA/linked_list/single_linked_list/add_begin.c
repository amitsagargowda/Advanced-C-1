#include"header.c"

/* Adding elements at the beginning */
void add_begin(ST **ptr)
{
    ST *temp;
    temp = (ST*)malloc(sizeof(ST));
    printf("Enter the roll,name & marks\n");
    scanf("%d%s%f",&temp->roll,temp->name,&temp->marks);

    temp->next = *ptr;
    *ptr = temp;
}
