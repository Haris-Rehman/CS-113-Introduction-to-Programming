# include <stdio.h>
int main()
{
	int x, y, z, a;
	printf("enter the number of rows from 1 to 10\n");
	scanf_s("%d", &a);
	for (x = 1; x <= a; x++)
	{
		for (z = 1; z <= a - x; z++)
			printf(" ");
		for (y = 1; y <= x; y++)
			printf("* ");
		printf("\n");
	}
}
