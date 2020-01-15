# include <stdio.h>
int main()
{
	char character; char output; // variables defined.
	printf("\n Enter the character, 0 to end.\n"); // ask user to enter the character.
	scanf_s("%c", &character); // take input from the user.
	while (character != '0') // while input is not "0".
	{
		if (character >= 'a' && character <= 'z') // if user input the small case letters.
		{
			output = character - 32; // substract 32 from the ASCII code, so it will be ASCII code for capital letters.
			printf("\n The required number is: %c\n", output); // display the required number.
		}
		else if (character >= '1' && character <= '9') // if user input between 1 and 9.
		{
			output = (int)character - 47; // substract 47 from the ASCII code of number.
			printf("\n The required number is: %d\n", output); // display the required number.
		}
		_flushall ();
		printf("\n Enter again.\n"); // if upper both conditions are not satisfied, then enter again.
		scanf_s("%c", &character); // take input from the user.
	} // end while.
}
