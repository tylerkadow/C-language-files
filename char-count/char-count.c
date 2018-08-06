#include <stdio.h>

int main()
{
	/* code */
	long nc;

	nc = 0;

	while (getchar() != EOF) {
		++nc;
		printf("%ld\n", nc);
	}

	/* This code increments every time
	the user hits enter in the prompt */

	return 0;
}