#include <stdio.h>

/* print Fahrenheit-Celsius Table */

int main()
{
	/* code */
	float fahr, cels;
	/*We'll need these to be floats, not
	of ints to get more precise answers*/
	int lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;

	fahr = lower; /* starts the 
	table atzero degrees */
	while (fahr <= upper) {
		cels = (5.0/9.0) * (fahr - 32);
		printf("%3.0f %6.1f\n", fahr, cels );
		/* %f represents a float variable
		inside the parentheses, in order
		while \t places a tab in between
		these two variables. the number
		represents a width, which aligns
		the numbers to the right */
		/* %3.0f means print as floating
		point at least 3 characters wide. */
		fahr = fahr + step;
		/* then it runs again until 
		the while stipulation no longer
		applies. */
	}

	return 0;
}