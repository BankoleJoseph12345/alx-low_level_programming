#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char ch = ' ';
	int int_num = 0;
	int long_int = 0l;
	int long_long_int = 0ll;
	float float_num = 0.0f;

	printf("Size of a char: %ld byte(s)\n", sizeof(char));
	printf("Size of an int: %ld byte(s)\n", sizeof(int));
	printf("Size of a long int: %ld byte(s)\n", sizeof(long));
	printf("Size of a long long int: %ld byte(s)\n", sizeof(long long));
	printf("Size of a float: %ld byte(s)\n", sizeof(float));
	return (0);
}
