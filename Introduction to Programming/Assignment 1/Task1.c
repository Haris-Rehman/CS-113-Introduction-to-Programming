# include <stdio.h>
# include <math.h>
int main()
{
	int a, b = 1, c, d = 1; // variables defined
	printf("enter the number between 1-8:  ");
	scanf_s("%d", &a);
	if (a > 0 && a <= 8) // if scaned value is 1-8
	{
		while (b <= a) // while b is less than a, print next line
		{
			c = 1;
			while (c <= a) // while c is less than a, print rows
			{
				d = powf(b, c); // d is calculated
				printf("%d\t", d);// print d
				c = c + 1;
			}// end while
			printf("\n");//print next line
			b = b + 1;
		}// end while
	}// end if
}
