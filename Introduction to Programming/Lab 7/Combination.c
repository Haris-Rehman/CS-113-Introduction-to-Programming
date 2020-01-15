#include<stdio.h>

int main()
{
	double ply, n = 1, l = 1, m = 1, comb, group, i;
	printf("Enter the number of players:");
	scanf_s("%lf", &ply);
	if (ply > 0 && ply <= 20)
		printf("Select the team\n1)Cricket 2)Basketball 3)Icehockey\n");
	scanf_s("%lf", &team);
	while (ply < 11 && group == 1){
		printf("Enter the number of players:");
		scanf_s("%lf", &ply);
	}
	if (ply >= 11 && group == 1){
		for (i = 1; i <= ply; i++)
			n = n* i;
		for (i = 1; i <= 11; i++)
			l = l * i;
		for (i = 1; i <= (ply - 11); i++)
			m = m*i;
		comb = n / (l*m);
		printf("The combination is %lf\n", comb);
	}
	while (ply < 5 && group == 2){
		printf("Enter the number of players:");
		scanf_s("%lf", &ply);
	}
	if (ply >= 5 && group == 2) {
		for (i = 1; i <= ply; i++)
			n = n* i;
		for (i = 1; i <= 5; i++)
			l = l * i;
		for (i = 1; i <= (ply - 5); i++)
			m = m*i;
		comb = n / (l*m);
		printf("The combination is %lf\n", comb);
	}
	while (ply < 6 && team == 3){
		printf("Enter the number of players:");
		scanf_s("%lf", &ply);
	}
	if (ply >= 6 && group == 3) {
		for (i = 1; i <= ply; i++)
			n = n* i;
		for (i = 1; i <= 6; i++)
			l = l * i;
		for (i = 1; i <= (ply - 6); i++)
			m = m*i;
		comb = n / (l*m);
		printf("The combination is %lf\n", comb);
	}
}
