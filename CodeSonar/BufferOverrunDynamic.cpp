#include<stdio.h>

#include<string.h>
#include<stdlib.h>

//typedef unsigned long size_t;
//void* malloc(size_t);
void test_buffer_overrun_dynamic(int p[]) {
	p[4] = 1729;
}
void test_driver1(void) {
	int *p =( int *)malloc(4);
	test_buffer_overrun_dynamic(p);
}

void main(){
	printf("Test");
}