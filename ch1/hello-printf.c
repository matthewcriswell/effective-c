#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int number;
    int return_value;

    if (printf("Hello, world!\n") == EOF) {
	    return EXIT_FAILURE;
    }
    return_value = printf("Hello, world!");

    printf("The return value was: %d\n", return_value);
    printf("Enter an integer: \n");
    scanf("%d", &number);
    return_value = printf("You entered: %d\n", number);
    printf("The return value of the printf was %d\n", return_value);
    printf("The integer value of EOF is %d\n", EOF);
    return_value = 0;
    return_value = puts("Hello, world!");
    printf("The puts return value is: %d\n", return_value);
    return EXIT_SUCCESS;
}
