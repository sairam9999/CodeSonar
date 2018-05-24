#include<string.h>
#include<stdio.h>
#include<stdlib.h>


//typedef unsigned long size_t;
//void *malloc(size_t);
//void free(void *);

void test_double_free(int *p) {
	if (p)
		free(p);
}

void test_driver3(void) {
	int *pi1 = (int *)malloc(sizeof(int));
	if (pi1)
		test_double_free(pi1);
	if (pi1)
		free(pi1);
}