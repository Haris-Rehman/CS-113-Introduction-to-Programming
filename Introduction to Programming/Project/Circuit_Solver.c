#include<stdio.h>

float parallel_combination(float EQresistance); // for parallel combination of resistances
float series_combination(float EQresistance); // for series combination of resistances
float complex_combination(float EQresistance, int node); // if series combination present in parallel

int main()
{
	printf("\t*WELCOME TO THE CIRCUIT SOLVER*\n");
	float voltage; // declaring variable for source voltage
	int nodes; // total number of nodes
	int node;
	char typcomb; // type of combination between two nodes
	float current;
	float power;
	char proceed; // variable if user want to run program again
	int option;
	while (1)
	{
		float EQRESISTANCE = 0; // equivelent resistance of the whole circuit
		printf("\n\nEnter the number of nodes in the circuit:  ");
		scanf_s("%d", &nodes); // total number of nodes in the circuits
		if (nodes > 1)
		{
			for (node = 1; node < nodes; node++) // between two nodes
			{
				float EQresistance = 0; // equivelent resistance between two nodes
				printf("\nBetween node%d and node%d :  \n", node, node + 1);
				printf("What is the type of combination s=series p=parallel  :");
				scanf_s(" %c", &typcomb); // type of combination
				if (typcomb == 's') // if series combination
				{
					EQresistance = series_combination(EQresistance); // called series founction between two nodes
					EQRESISTANCE = EQRESISTANCE + EQresistance; // adding resistance to equivelent resistance of the circuit
				}
				else if (typcomb == 'p') // if perellal combination
				{
					char complex;
					printf("is there any series resistances present in parallel?\n y=yes n=no\n");
					scanf_s(" %c", &complex); // is there any series combination of resistances in perellal?
					if (complex == 'y') // if yes
					{
						EQresistance = complex_combination(EQresistance, node); // called complex founction between two nodes
						EQRESISTANCE = EQRESISTANCE + EQresistance; // adding resistance to equivelent resistance of the circuit
					}
					else if (complex == 'n') // if no
					{
						EQresistance = parallel_combination(EQresistance); // called parallel founction between two nodes
						EQRESISTANCE = EQRESISTANCE + EQresistance; // adding resistance to equivelent resistance of the circuit
					}
				}
			}
			
			printf("Enter the source voltage applied (in volts):  ");
			scanf_s("%f", &voltage);
			current = voltage / EQRESISTANCE;
			power = current * voltage;
			do
			{
				printf("What do you want to do?\n 1 = Equivelence resistance of the circuit\n 2 = Current flowing through the circuit\n 3 = Power consumed by the circuit\n 4 = Enter a new circuit\n 0 = Exit the program.\n");
				scanf_s("%d", &option); // what the user want to calculate
				switch (option)
				{
				case 1:
					printf("Equivelent resistance of the circuit is:  %f ohm\n", EQRESISTANCE);
					break;
				case 2:
					printf("Current flowing through the circuit is:  %f ampere\n", current);
					break;
				case 3:
					printf("Power consumed in the circuit is:  %f watt\n", power);
					break;
				case 0:
					return 0; // end program
				}
			} while (option != 4);
		}
		else // if nodes are less than 2
		{
			printf("Wrong number of nodes entered.\n");
			printf("Do you want to continue? y=yes n=no  :  ");
			scanf_s(" %c", &proceed);
			if (proceed == 'n')
				return 0; // end program
		}
	}
}

float parallel_combination(float EQresistance) // funtion for parallel combination 
{
	int nor; // number of resistances
	float reciprocal = 0; float resistance;
	printf("Enter the numbers of resistances:  ");
	scanf_s("%d", &nor);
	printf("Enter the values of resistances (in ohm):\n");
	for (int i = 1; i <= nor; i++)
	{
		scanf_s("%f", &resistance);
		reciprocal = reciprocal + (1 / resistance); // (1 / resistances) are added in reciprocal
	}
	EQresistance = (1 / reciprocal); // (1 / reciprocal) is the equivelent resistance between two nodes
	return EQresistance;
}

float series_combination(float EQresistance) // funtion for parallel combination 
{
	int nor; float resistance; // number of resistances
	printf("Enter the numbers of resistances:  ");
	scanf_s("%d", &nor); // enter the number of resistances
	if (nor > 0)
	{
		printf("Enter the values of resistances (in ohm):\n"); // asking values of resistances from the user 
	}
	for (int i = 1; i <= nor; i++)
	{
		scanf_s("%f", &resistance);
		EQresistance = EQresistance + resistance; // resistances of resistors add in series combination
	}
	return EQresistance; // return the sum of resistances as the equivelent resistance in series
}

float complex_combination(float EQresistance, int node) // founction used when series resistors are present in parallel combination
{
	float reciprocal = 0;
	int branches; // total number of branches emerge from node
	printf("How many branches emerge from node%d?   ", node);
	scanf_s("%d", &branches);
	for (int branch = 1; branch <= branches; branch++) // for every branch
	{
		float eqresistance = 0; // equivelent resistance for every branch
		printf("In path%d;\n", branch);
		eqresistance = series_combination(eqresistance); // called series founction in one branch
		reciprocal = reciprocal + (1 / eqresistance); // adding 1 / (equivelent resistance of every branch) in reciprocal
	}
	EQresistance = (1 / reciprocal); // (1 / reciprocal) is the equivelent resistance between two nodes
	return EQresistance;
}
