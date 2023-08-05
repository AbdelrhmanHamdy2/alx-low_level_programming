#include <stdio.h>

/**
 * main - prints the phrase "Programming is like building a multilingual puzzle
 * Return: 0 if exited properly, non-zero otherwise
 */
int main(void)
{
	char c;
	int d;
	long int ld;
	long long int ll;
	float f;

printf("Size of a char: %ld byte(s)\n", sizeof(c));
printf("Size of an int: %d byte(s)\n", sizeof(d));
printf("Size of a long int: %d byte(s)\n", sizeof(ld));
printf("Size of a long long int: %d byte(s)\n", sizeof(ll));
printf("Size of a float: %d byte(s)\n", sizeof(f));
return (0);
}
