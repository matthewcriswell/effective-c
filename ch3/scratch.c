#include <stdio.h>
#include <limits.h>
int main(void){
	printf("Hello, world!\n");


	unsigned int ui = UINT_MAX;

	printf("ui = %u\n", ui);
	ui++;
	printf("ui = %u\n", ui);
	return 0;
}
