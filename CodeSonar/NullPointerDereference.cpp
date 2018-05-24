#include<stdio.h>

#include<string.h>

#define NULL (void *)0

void test_deref(int *p) {
	*p = 55;
}

void test_driver5(void) {
	int *pi1 = (int *) NULL;
	test_deref(pi1);
}