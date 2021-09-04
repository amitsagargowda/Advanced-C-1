/* This program explains about the bubble sort 
 *
 * Email : abinashprabakaran@gmail.com
 * Date : 02.09.2021
 * Author : Abinash
 */

#include<stdio.h>	/* required for printf */

/* main program */

int main()
{
	int a[] = {30, 50, 20, 10, 40};
	int i, j ,n, temp;

	n = sizeof a / sizeof a[0];		/* to get the number of items stored in the array 'n' */

	printf("Before sorting : ");
	for(i = 0; i<5; i++)
		printf("%d  ",a[i]);		/* 30 50 20 10 40 is printed  */
	printf("\n");

	for(i = 0; i < n-1; i++)		/* n-1 iteration */
	{
		for(j = 0; j < n-1-i; j++)	
		{
			if(a[j] > a[j+1])	/* adjacent elements are compared */
			{
				/* swapping operation */
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}

	printf("After sorting : ");
	for(i = 0; i < 5; i++)
		printf("%d  ",a[i]);		/* 10 20 30 40 50 is printed */
	printf("\n");

	return 0;				/* program executed successfully */
}
