#include <stdio.h>
int * increment(void) {
	static unsigned int counter = 0;
	counter++;
	return &counter;
}

int retrieve(int * counterp) {
	return *counterp;
}

int main(void){
	int *counterp = 0;
	for (int i = 0; i < 5; i++){
		counterp = increment();
		printf("The value of conunter is %d\n", retrieve(counterp));
	}
	return 0;
}
