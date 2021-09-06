#include"header.c"
void rev_data(ST *ptr)
{
	ST *p1,*p2,temp;
	p1 = ptr;
	int i,j,c = count(ptr);
	int size = sizeof(ST)-2*sizeof(ST*); 

	p2 = ptr;
	for(j=0;j<c-1;j++)
	p2 = p2->next;

    for(i=0;i<c/2;i++)
    {
	memcpy(&temp.roll,&p1->roll,size);	
	memcpy(&p1->roll,&p2->roll,size);	
	memcpy(&p2->roll,&temp.roll,size);	
	
	p1 = p1->next;
	p2 = p2->prv;
    }	
}	
