#include<stdio.h>

void test_buffer_overrun(int p[]) {
	p[4] = 1729;
}

void test_driver2(void) {
	int test[4];
	test_buffer_overrun(test);
}