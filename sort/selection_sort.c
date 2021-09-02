/* This program explains about selection sort
 *
 * Email : abinashprabakaran@gmail.com
 * Date : 02.09.2021
 * Author : Abinash
 */

#include<stdio.h>	/* required for printf, scanf */

/* main program */

int main()
{
	int a[100], i, j, n, temp, position;
	printf("Enter the number of elements : \n");
	scanf("%d",&n);

	printf("Enter the elements : \n");
	for(i=0; i<n; i++)
		scanf("%d",&a[i]);
	
	/* one by one move boundary of unsorted array */	
	for(i=0; i<n-1; i++)
	{
		/* find the minimum element in unsorted array */
		position = i;
		for(j=i+1; j<n ;j++)
		{
			if(a[position] > a[j])
				position = j;
		}
		
		/* swapping operation */
		if(position != i)
		{
			temp = a[i];
			a[i] = a[position];
			a[position] = temp;
		}
	}

	printf("After sorting : ");
	for(i=0; i<n; i++)
		printf("%d ",a[i]);	/* a[i] value printed after sorting */
	printf("\n");
	return 0;			/* program executed successfully */
}
