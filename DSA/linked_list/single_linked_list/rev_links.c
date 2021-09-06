#include"header.c"
void rev_links(ST **ptr)
{
	ST *q = 0,*r;
	
	while(*ptr != 0) {
	r = q;  //r = 0,A,B,C,D
	q = *ptr; //q = A,B,C,D,E
	*ptr = (*ptr)->next; //*ptr = B,C,D,E,0
	q->next = r;//A->next=0,B->next=A,C->next=B,D->next=C
	}					   //E->next = D 

	*ptr = 	q; //hptr = E
}
/*
void rev_links(ST **ptr)
{
	int i = 0,c = count(*ptr);
	ST *temp = *ptr;

	ST **p = (ST **)malloc(c*sizeof(ST *));
	while(temp != 0) {
	p[i++] = temp;
	temp = temp->next;
	}	

	p[0]->next = 0;
	for(i=1;i<c;i++)
	p[i]->next = p[i-1];

	*ptr = p[c-1];
}
*/
