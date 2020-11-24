#include <stdio.h>

int main(){
	printf("Hello, world!\n");
	char str[11];
	for(unsigned int i = 0; i < 10; ++i){
		str[i] = '0' + i;
		printf("i is %d and the corresponding element in the array is: %c\n",i, str[i]);
	}
	str[10]='\0';
	printf("%s\n",str);
	printf("11 has %c\n", str[11]);
	printf("12 has %c\n", str[12]);
	printf("13 has %c\n", str[13]);
	printf("14 has %c\n", str[14]);
	printf("999 has %c\n", str[999]);

	return 0;
}
