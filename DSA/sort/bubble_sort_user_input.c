/* This program explains about the bubble sort with inputs provided by the user
 *
 * Email : abinashprabakaran@gmail.com
 * Date : 02.09.2021
 * Author : Abinash
 */

#include<stdio.h>	/*required for printf, scanf */

/* main program */

int main()
{
	int a[10], i, j, n, temp;
	printf("Enter the no. of elements : \n");
	scanf("%d",&n);			          /* total number of element 'n' is stored */
	
	printf("Enter the elements : \n");
	for(i=0; i<n; i++)
		scanf("%d",&a[i]);		  /* Input from the user is stored in a[i] */

	printf("Before sorting : ");
	for(i=0; i<n; i++)
		printf("%d  ",a[i]);		  /* Input from the user is printed */
	printf("\n");

	for(i=0; i<n-1; i++)			  /* n-1 iteration */
	{
		for(j=i+1; j<n; j++)
		{	
			/* sorting oeration */
			if(a[i] > a[j])
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}

	printf("After sorting : ");
	for(i=0; i<n; i++)
		printf("%d  ",a[i]);	          /* a[i] printed after sorted */
	printf("\n");
	return 0;				  /* program executed successfully */
}
