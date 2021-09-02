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
	
	for(i=0; i<n-1; i++)
	{
		position = i;
		for(j=i+1; j<n ;j++)
		{
			if(a[position] > a[j])
				position = j;
		}
		
		if(position != i)
		{
			temp = a[i];
			a[i] = a[position];
			a[position] = temp;
		}
	}

	printf("After sorting : ");
	for(i=0; i<n; i++)
		printf("%d ",a[i]);
	printf("\n");
	return 0;
}
