# include <stdio.h>
int main(void)
{
	int first; int second; int third; int fourth; // digits are defined
	int a = 2792; // pin code
	int num; // number of trails
	num = 0; // starting at 0 number of trails
	while (num < 3) // while number of trails are less than 3
	{
		printf("enter the first digit\n"); // ask user to enter 1st digit
		scanf_s("%d", &first); // scan first digit
		if (first != 2) // if first digit is not equal to 2
		{
			printf("error\n"); // show error
			num = num + 1; // 1 is added in number of trails
		}
		else // if first digit is equal to 2
		{
			printf("enter the second digit\n"); // ask user to enter 2nd digit
			scanf_s("%d", &second); // scan 2nd digit
			if (second != 7) // if first digit is not equal to 7
			{
				printf("error\n"); // show error
				num = num + 1; // 1 is added in number of trails
			}
			else // if first digit is equal to 7
			{
				printf("enter the third digit\n"); // ask user to enter the third digit
				scanf_s("%d", &third); // scan 3rd digit
				if (third != 9) // if first digit is not equals to 9
				{
					printf("error\n"); // show error
					num = num + 1; // 1 is added in number of trails
				}
				else // if first digit is equal to 9
				{
					printf("enter the fourth digit\n"); // ask user to enter the fourth digit
					scanf_s("%d", &fourth); // scan 4th digit
					if (fourth != 7) // if first digit is not equals to 7
					{
						printf("error\n"); // show error
						num = num + 1; // 1 is added in number of trails
					}
					else // if first digit is equal to 7
					{
						printf("the four digit pincode is 2797\n"); // show the four digit pincode
						return 0;
					}
				}
			}
		}
	}
}
