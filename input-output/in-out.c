#include <stdio.h>

int main()
{
	int c;

	c = getchar();
	while (c != EOF){
		putchar(c);
		c = getchar();
	}
	/* code */
	return 0;
}