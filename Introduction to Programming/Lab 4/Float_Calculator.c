# include <stdio.h>
# include <conio.h>
float main()
{
	float first, second; // two numbers for input
	char sign; // founction to perform
	printf("\n enter two numbers\n"); // show the numbers on the screen
	scanf_s("%f %f", &first, &second); // take the two numbers from the user
	printf("%f %f", first, second); // show the two numbers on the screen
	printf("\n enter the founction to perform\n"); // ask the user to enter the founction to be performed
	_flushall();
	scanf_s("%c", &sign); // take the input character from the user
	if (sign == '+')
		printf("sum of two numbers is = %f", first + second); // adding two numbers
	if (sign == '-')
		printf("differance of two numbers is = %f", first - second); // substracting two numbers
	if (sign == '*')
		printf("product of two numbers is = %f", first * second); // multiplyin two numbers
	if (sign == '/')
		printf("division of two numbers is = %f", first / second); // divide two numbers
}
