#include <stdio.h>

void swap(int*, int*);

int main(void) {
	int a = 21;
	int b = 17;

	printf("main: a = %d, b= %d\n", a, b);
	swap(&a, &b);
	printf("main: a = %d, b= %d\n", a, b);
	swap(&a, &b);
	printf("main: a = %d, b= %d\n", a, b);
	return 0;
}

void swap(int *pa, int *pb) {
	int t = *pa;
	*pa = *pb;
	*pb = t;
}
