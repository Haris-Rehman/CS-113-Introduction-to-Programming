# include <stdio.h>
int main()
{
	int integer1, integer2; int operation; char proceed; int a, b=0, c, d; float oddaverage, evenaverage; int prime=0;
	int oddsum=0, evensum=0, ecounter=0, ocounter=0, pcounter = 0; int odd, even; // variables declared.
	printf("enter two integers:\n");
	printf("larger integer: ");
	scanf_s("%d", &integer1); // scan larger integer
	printf("smaller integer: ");
	scanf_s("%d", &integer2); // scan smaller integer
	do
	{
		do
		{
			printf("enter the operation to perform:\n (1) average of all the odd numbers in range provided, (2) average of all the even numbers in range provided, (3) total number of prime numbers in the range. ");
			scanf_s("%d", &operation); // operation to perform.
			switch (operation)
			{
			case 1: // find  average of all the odd numbers in range provided
				for (int i = integer2; i <= integer1; i++)
				{
					odd = i % 2;
					if (odd == 1)
					{
						oddsum = oddsum + i;
						ocounter = ocounter + 1;
					} // end if
					if (ocounter != 0)
					{
						oddaverage = oddsum / ocounter;
					}// end if
				}// end for
				printf("average of the odd numbers in range is: %.2f", oddaverage);
				break;
			case 2: // find  average of all the even numbers in range provided
				for (int j = integer2; j <= integer1; j++)
				{
					even = j % 2;
					if (even == 0)
					{
						evensum = evensum + j;
						ecounter = ecounter + 1;
					}// end if
					if (ecounter != 0)
					{
						evenaverage = evensum / ecounter;
					}// end if
				}// end for
				printf("average of the even numbers in range is: %.2f", evenaverage);
				break;
			case 3: // numbers of prime numbers in the range
				for (int k = integer2; k <= integer1; k++)
				{
					for (a = 1; a <= k; a++)
					if (k%a == 0 && k != 1)
						pcounter = pcounter + 1;
					if (pcounter == 2)
					{
						prime = prime + 1;
					}// end if
				}// end for
				printf("number of prime numbers in range are: %d", prime);
				break;
			default:
				printf("incorrect operation entered.");
				break;
			} // end switch
		} while (integer1 > integer2 && integer2 > 0); // while upper limit is greater than lower limit and lower limit is positive.
		printf("do you want to proceed? y=yes, n=no\n");
		scanf_s(" %c", &proceed);
	} while (proceed!='n'); // end do while, if user enter n.
}
