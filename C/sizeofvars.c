#include <stdbool.h>
#include <stdio.h>

int main() {
	printf("Size of bool: %i\n", sizeof(bool));
	printf("Size of signed char: %i\n", sizeof(signed char));
	printf("Size of unsigned char: %i\n", sizeof(unsigned char));
	printf("Size of signed short int: %i\n", sizeof(signed short int));
	printf("Size of unsigned short int: %i\n", sizeof(unsigned short int));
	printf("Size of signed int: %i\n", sizeof(signed int));
	printf("Size of unsigned int: %i\n", sizeof(unsigned int));
	printf("Size of signed long int: %i\n", sizeof(signed long int));
	printf("Size of unsigned long int: %i\n", sizeof(unsigned long int));
	printf("Size of signed long long int: %i\n", sizeof(signed long long int));
	printf("Size of unsigned long long int: %i\n", sizeof(unsigned long long int));
	printf("Size of float: %i\n", sizeof(float));
	printf("Size of double: %i\n", sizeof(double));
	printf("Size of long double: %i\n", sizeof(long double));

	return 0;
}
