#include"header.c"
void save(ST *ptr)
{
      FILE *fp = fopen("data.txt","w");

      while(ptr != 0) 
      {
	      fprintf(fp,"%d %s %f\n",ptr->roll,ptr->name,ptr->marks);
      	      ptr = ptr->next;
      }
}



