/* This program implements the quick sort 
 *
 * Email : abinashprabakaran@gmail.com
 * Date : 06.09.2021
 * Author : Abinash
 */

#include<stdio.h>	/*required for printf, scanf */

void quicksort(int number[25],int first,int last)
{
	int i, j, pivot, temp;
	if(first < last)
	{
		pivot = first;
		i = first;
		j = last;
		while(i < j)	/* when firt number is less than last number swap the number */
		{
			while(number[i] <= number[pivot] && i < last)
				i++;
			while(number[j] > number[pivot])
				j--;
			if(i < j)	/* swap the two numbers */
			{
				temp = number[i];
				number[i] = number[j];
				number[j] = temp;
			}
		}

		/* swap the unsorted number with pivot number */
		temp = number[pivot];
		number[pivot] = number[j];
		number[j] = temp;
		
		quicksort(number,first,j-1);
		quicksort(number,j+1,last);
	}
}

/* main program */
int main()
{
	int i, count, number[25];
	printf("Enter the no of elements ");
	scanf("%d",&count);
	printf("Enter %d elements: ", count);
	for(i=0;i<count;i++)
		scanf("%d",&number[i]);
	quicksort(number,0,count-1);
	printf("The Sorted Order is: ");
	for(i=0;i<count;i++)
		printf(" %d",number[i]);
	printf("\n");
	return 0;
}
