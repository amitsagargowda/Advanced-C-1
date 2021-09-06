#include"header.c"
void rev_data(ST *ptr)
{
	ST *p1,*p2,temp;
	p1 = ptr;
	int i,j,c = count(ptr);
	int size = sizeof(ST)-sizeof(ST*); 

    for(i=0;i<c/2;i++)
    {
	p2 = ptr;
	for(j=0;j<c-1-i;j++)
	p2 = p2->next;

	memcpy(&temp,p1,size);	
	memcpy(p1,p2,size);	
	memcpy(p2,&temp,size);	
	
	p1 = p1->next;
    }	
}	
