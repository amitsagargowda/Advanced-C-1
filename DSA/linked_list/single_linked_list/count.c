#include"header.c"
int count(ST *ptr)
{
	int cnt = 0;
	while(ptr != 0) {
	cnt++;
	ptr = ptr->next;
	}

	return cnt;
}
