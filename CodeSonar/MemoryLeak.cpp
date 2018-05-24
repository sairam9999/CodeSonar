#include<stdio.h>

#include<string.h>
#include<stdlib.h>

//typedef unsigned long size_t;
//void *malloc(size_t);
//void free(void *);

void test_free(int *p, int x) {
	if (p && x < 10)
		free(p);
}
void test_driver4(void) {
	int *pi1 = (int *) malloc(20);
	test_free(pi1, 20);
}