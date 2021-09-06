/* This program implements the single linked list 
 *
 * Email : abinashprabakaran@gmail.com
 * Date : 06.09.2021
 * Author : Abinash
 */

#include<stdio.h>
#include<stdlib.h>
typedef struct student
{
	int roll;
	char name[20];
	float marks;
	struct student *next;//self-referential	
}ST;				//structure pointer.
void add_begin(ST **);
void add_end(ST **);
void add_middle(ST **);
void print(ST *);
void save(ST *ptr);
int count(ST *ptr);



