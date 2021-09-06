#include"header.c"

/* Adding elements at the end */
void add_end(ST **ptr)
{
    ST *temp;
    temp = (ST*)malloc(sizeof(ST));
    printf("Enter the roll,name & marks\n");
    scanf("%d%s%f",&temp->roll,temp->name,&temp->marks);

    if(*ptr == 0) {
    temp->next = *ptr;
    *ptr = temp;
    }
    else {
    ST *last = *ptr;
    while(last->next != 0)	
    last = last->next;

    temp->next = last->next;    	
    last->next = temp; 
    }
}
