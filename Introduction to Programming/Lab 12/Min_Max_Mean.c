# include<stdio.h>

int max_founction(int[], int k);
int min_founction(int[], int k);
float avg_founction(int[], int k);
int mid_founction(int[], int k);

int main()
{
	int input; int max; int min; float average; int i; int j; int proceed; int mid;
	char option;
	int array1[100] = { 0 };
	while (1)
	{
		static int counter = 0, k=0;
		printf("what do you want to do?\na = enter values\nb = print maximum value\nc = print minimum value\nd = print average value\ne = print median value\n0 = exit the program\n");
		scanf_s(" %c", &option);
		switch (option)
		{
		case'a':
			printf("how many values do you want to enter: ");
			scanf_s("%d", &input);
			counter = counter + input;
			if (counter <= 100)
			{
				printf("now enter the values:\n");
				for (i = k; i < k + input; i++)
				{
					scanf_s("%d", &array1[i]);
				}
				k = k + input;
			}
			else
			{
				printf("ERROR\n");
				return 0;
			}
			break;
		case'b':
			max = max_founction(array1, k);
			printf("maximum number is: %d \n\n", max);
			break;
		case'c':
			min = min_founction(array1, k);
			printf("minimum number is: %d \n\n", min);
			break;
		case'd':
			average = avg_founction(array1, k);
			printf("average is: %f \n\n", average);
			break;
		case'e':
			mid = mid_founction(array1, k);
			printf("median is: %d \n\n", mid);
			break;
		case'0':
			return 0;
		}
	}
}

int max_founction(int array[], int k)
{
	int max = array[1]; int i;
	for (i = 0; i<k; i++)
	{
		if (array[i] > max)
			max = array[i];
	}
	return max;
}

int min_founction(int array[], int k)
{
	int min = array[1]; int i;
	for (i = 0; i<k; i++)
	{
		if (array[i] < min)
			min = array[i];
	}
	return min;
}

float avg_founction(int array[], int k)
{
	float average; float sum = 0; int j;
	for (j = 0; j <k; j++)
	{
		sum = sum + array[j];
	}
	average = sum / k;
	return average;
}

int mid_founction(int array[], int k)
{
	int c, swap, d;
	for (c = 0; c < (k - 1); c++)
	{
		for (d = 0; d <k - c - 1; d++)
		{
			if (array[d] >array[d + 1])
			{
				swap = array[d];
				array[d] = array[d + 1];
				array[d + 1] = swap;
			}
		}
	}
	return array[c / 2];
}
