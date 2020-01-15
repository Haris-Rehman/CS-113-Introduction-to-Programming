# include <stdio.h>
int reverse(int);
int main(void)
{
	int input; int output;
	printf("inter an integer:  ");
	scanf_s("%d", &input);
	output = reverse(input);
	printf("reverse of input integer is:  %d \n", output);
}
int reverse(int number)
{
	static int sum = 0; int remainder;
	if (number>0)
	{
		remainder = number % 10;
		sum = sum * 10 + remainder;
		int r = reverse(number/10);
		return sum;
	}
	else
		return sum;
}
