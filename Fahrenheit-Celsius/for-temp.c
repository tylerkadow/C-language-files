#include <stdio.h>

int main()
{
	/* code */
	int fahr;

	/* fahr is now an int, but the output
	in the printf function is a float,
	meaning	we get the same output as
	the while function previously. */

	for (fahr = 0; fahr <= 300; fahr = fahr + 20)
	{
		/* code */
		printf("%3d %6.1f\n", fahr, (5.0/9.0) * (fahr-32));
	}

	return 0;
}