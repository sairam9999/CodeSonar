#include<stdlib.h>


//typedef unsigned long size_t;
//void *malloc(size_t);
//void free(void *);

void foo2() {
	char *p = (char *)malloc(10);
	char *q = p;
	if (p) {
		p[0] = 'X';
		free(p);
		q[0] = 'Y';
	}
}