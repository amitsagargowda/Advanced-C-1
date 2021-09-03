/* This program explains about insertion sort.
 * Explaination about the insertion sort is given in README.md file
 *
 * Email : abinashprabakaran@gmail.com	
 * Date : 02.09.2021
 * Author : Abinash
 */

#include<stdio.h>	/* required for printf and scanf */

/* main program */

int main()
{
	int a[100];
	int i, j, n, temp;

	printf("Enter the number of elements : ");
	scanf("%d",&n);

	printf("Enter %d elements\n",n);
	for(i=0; i<n; i++)
		scanf("%d",&a[i]);	/* storing 'n' number of elements in a[i] */

	for(i=0; i<n; i++)
	{
		j = i;			/* assign 'i' to 'j' */

		while(j>0 && a[j-1] > a[j])	/* comparing min element with the other elements   */
		{
			/* swapping operations */

			temp = a[j];
			a[j] = a[j-1];
			a[j-1] = temp;

			j--;		/* decrementing j value */
		}
	}

	printf("After Insertion sort : \n");
	for(i=0; i<n; i++)
		printf("%d  ",a[i]);	/* prints the sorted array */
	printf("\n");

	return 0;			/* program executed successfully */
}
