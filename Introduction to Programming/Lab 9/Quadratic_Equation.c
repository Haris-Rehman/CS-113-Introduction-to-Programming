# include<stdio.h>
# include<math.h>

intmy_quadratic(float a, float b, float c); // prototype.

int main()
{
	int a, b, c; // variables to be scanned by user.
	int proceed; int h; // variables initiallized.
	do
	{
		printf("enter the values of constants to solve the quardratic equation.\n");
		printf("enter the constant a: ");
		scanf_s("%d", &a);			// coefficient of x^2
		printf("enter the constant b: ");
		scanf_s("%d", &b);			// coefficient of x^1
		printf("enter the constant c: ");
		scanf_s("%d", &c);			// coefficient of x^0

		h = my_quadratic(a, b, c); // founction call

		if (h == -1) // if founction return -1.
		{
			printf("No solution can be found.\n");
		}

		printf("do you want to continue? 1=yes 0=no\n"); // if user want to continue.
		scanf_s("%d", &proceed);
	} while (proceed != 0); // if user enter 0, then exit.
}

intmy_quadratic(floata, floatb, floatc) // founction defined.
{
	if (a == 0)
	{
		return -1;
	}
	else
	{
		if ((b*b - 4 * a*c) < 0) // if discriminent< 0.
		{
			return -1;
		}
		else
		{
			float x1 = ((-b + sqrt(b*b - 4 * a*c)) / (2 * a)); // using quardratic formulae.
			float x2 = ((-b - sqrt(b*b - 4 * a*c)) / (2 * a)); // using quardratic formulae.
			printf("solutions are %f and %f. \n", x1, x2); // printing the solutions of quardratic equation.
			return 0;
		}
	}
}
