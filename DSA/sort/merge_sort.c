/* This program explains about the Merge sorting technique, where merge sort algorithm which follows divide and conquer approach.
 *
 * Email : abinashprabakaran@gmail.com
 * Date : 04.09.2021
 * Author : Abinash 
 */

/* Working of Merge sort
 * 			         10 5 2 23 45 21 7
 *
 * divide	       		10 5 2 23    45 21 7
 * 
 * divide	    	      10 5    2 23    45 21     7
 * 															
 * conquer & combine 	       5 10   2 23    21 45     7
 * 
 * conquer & combine	      2 5 10 23     7 21 45 
 * 
 * 				 2 5 7 10 21 23 45 
 */ 

#include<stdio.h>	/* required for printf, scanf */

void merge_sort(int a[], int low, int high)
{
	int mid;
	if(low >= high)
		return ;
	mid = (low + high) / 2;
	merge_sort(a, low, mid);	/* merge sort for first half */
	merge_sort(a, mid+1, high);	/* merge sort for second half */
	merge(a, low, mid, high);	/* Recursively, merge the two halves in a sorted manner, so that only one sorted array is left */
}

void merge(int a[], int low, int mid, int high)
{
	int b[20], i, j, k;
	i = low, j = mid + 1, k = low;

	/* Rearrange the elements in sorted array */
	while(i <= mid && j <= high)
	{
		if(a[i] <= a[j])
			b[k++] = a[i++];
		else
			b[k++] = a[j++];
	}
	while(i <= mid)
		b[k++] = a[i++];
	while(j <= high)
		b[k++] = a[j++];
	for(k = low; k <= high; k++)
		a[k] = b[k];
}

/* main program*/
int main()
{
	int a[20], n, i;
	printf("Enter the number of elements :\n");
	scanf("%d",&n);

	printf("Enter %d elements\n",n);
	for(i=0; i<n; i++)
		scanf("%d",&a[i]);

	merge_sort(a, 0, n-1);	/* merge_sort function declaration */

	printf("Sorted numbers : \n");

	for(i=0; i<n; i++)
		printf("%d  ",a[i]);
	printf("\n");
	return 0;
}
