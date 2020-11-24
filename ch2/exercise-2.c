#include <stdio.h>

int add(int a, int b) 
{ 
    return a+b;
} 
int subtract(int a, int b) 
{ 
    return a-b;
} 
int multiply(int a, int b) 
{ 
    return a*b;
} 

int main(){
	int a = 999;
	int b = 1215;

	int (*fun_ptr_arr[])(int, int) = {add, subtract, multiply};

	printf("0 should add a and b: %d\n", (*fun_ptr_arr[0])(a, b));
	printf("1 should add a and b: %d\n", (*fun_ptr_arr[1])(a, b));
	printf("2 should add a and b: %d\n", (*fun_ptr_arr[2])(a, b));

	return 0;
}
