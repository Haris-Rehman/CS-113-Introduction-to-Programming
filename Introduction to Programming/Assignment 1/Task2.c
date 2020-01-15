# include<stdio.h>
int main()
{
	int a, b, c = 3, d = 3, e; char input; //variables initiallized
	while (1) // infinite loop
	{
		_flushall;
		for (a = 1; a <= 5; a++) // loop to make columns of matrix
		{
			for (b = 1; b <= 5; b++) // loop to make rows of matrix
			{
				if (c<1 || c>5 || d<1 || d>5) // if value enter for X to go outside of the matrix
				{
					printf("cannot move there\n");
					if (c < 1) // if X moves out from above
					{
						c = c + 1;
					}
					if (c > 5)// if X moves out from below
					{
						c = c - 1;
					}
					if (d < 1) // if X move out from left
					{
						d = d + 1;
					}
					if (d > 5) // if X moves out from right
					{
						d = d - 1;
					}
				}
				if (a == c && b == d) // initially at column 3 and row 3, print X
				{
					printf("X ");
				}
				else
				{
					printf(". ");
				}
			}
			printf("\n");
		}
		printf("enter the direction:-\nw for up, s for down, a for left, d for right.\n");
		scanf_s(" %c", &input); // scan the direction
		if (input == '0')
		{
			return 0; // enter 0 to end the founction
		}
		else
		{
			if (input == 'w') // to move X in upward direction
				c = c - 1;
			else if (input == 's') // to move X in downward direction
				c = c + 1;
			else if (input == 'a') // to move X in left direction
				d = d - 1;
			else if (input == 'd') // to move X in right direction
				d = d + 1;
		}
	} // end 
