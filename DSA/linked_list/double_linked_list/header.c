/* This program implements about the double linked list
 *
 * Email : abinashprabakaran@gmail.com
 * Date : 06.09.2021
 * Author : Abinash
 */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct student
{
	struct student *prv;//self-referential	
	int roll;
	char name[20];
	float marks;
	struct student *next;//self-referential	
}ST;				//structure pointer.
void add_begin(ST **);
void add_end(ST **);
void add_middle(ST **);
void print(ST *);
void rev_print(ST *);
void rev_data(ST *);
void rev_links(ST **);
void save(ST *ptr);
void delete(ST **,int);
void delete_all(ST **);
int count(ST *ptr);



