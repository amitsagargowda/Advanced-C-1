#include<stdio.h>

int main()
{
	int a[100];
	int i, j, n, temp;

	printf("Enter the number of elements : ");
	scanf("%d",&n);

	printf("Enter %d elements\n",n);
	for(i=0; i<n; i++)
		scanf("%d",&a[i]);

	for(i=1; i<=n-1; i++)
	{
		j = i;
		while(j>0 && a[j-1] > a[j])
		{
			temp = a[j];
			a[j] = a[j-1];
			a[j-1] = temp;
			j--;
		}
	}

	printf("After Insertion sort : \n");
	for(i=0; i<n; i++)
		printf("%d  ",a[i]);
	printf("\n");

	return 0;
}
