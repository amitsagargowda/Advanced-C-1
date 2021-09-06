/* This program implements the hash table 
 *
 * Email : abinashprabakaran@gmail.com
 * Date : 06.09.2021
 * Author : Abinash
 */

#include<stdio.h>	/* required for printf */

#define size 7		/* set size as 7 */

int arr[size];		/* arr[7] */

/* set the array arr[i] as -1 in default */
void init()
{
	int i;
	for(i=0; i<size; i++)
		arr[i] = -1;
}

/* insert new element in the hash table
 *
 * @param[in] value, size
 * @param[out] key
 */
void insert(int value)
{
	int key = value % size;
	if(arr[key] == -1)
	{
		arr[key] = value;
		printf("%d inserted at arr[%d]\n",value,key);
	}

	else
	{
		printf("Collision : arr[%d] has element %d already ! \n",key,arr[key]);
		printf("Unable to insert %d \n",value);
	}
}

/* delete the element in the hash table
 *
 * @param[in] value, size
 * @param[out] key
 */
void del(int value)
{
	int key = value % size;
	if(arr[key] == value)
		arr[key] = -1;
	else 
		printf("%d is not present in the hash table\n",value);
}

/* search element in the hash table
 *
 * @param[in] value, size
 * @param[out] key
 */
void search(int value)
{
	int key = value % size;
	if(arr[key] == value)
		printf("Search found \n");
	else
		printf("Search not found \n");
}

/* prints the values in the hash table 
 *
 * @param[in] i
 * @param[out] arr[i]
 */
void print()
{
	int i;
	for(i=0; i<size; i++)
		printf("arr[%d] = %d\n",i,arr[i]);
}

/* main program */
int main()
{
	init();
	insert(10);	/* key = 10 % 7  => 3 */
	insert(4);	/* key = 4 % 7 => 4 */
	insert(2);	/* key = 2 % 7 => 2 */
	insert(3);	/* key = 3 % 7 => 3(collision) */

	printf("Hash Table \n");
	print();
	printf("\n");

	printf("Deleting value 10...\n");
	del(10);
	printf("After the deletion hash table\n");
	print();
	printf("\n");

	printf("Deleting value 5...\n");      
	del(5);  
	printf("After the deletion hash table\n");  
	print(); 
	printf("\n");

	printf("Searching value 4 ... \n");
	search(4);
	printf("Searching value 10 ... \n");
	search(10);

	return 0;
}
