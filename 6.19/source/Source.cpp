#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define SIZE 13


int main(void)
{
	int total;
	int face1, face2;
	int roll;
	int totalfrequency[SIZE] = { 0 };

	srand(time(NULL));

	for (roll = 1; roll <= 36000; roll++)
	{
		face1 = 1 + rand() % 6;
		face2 = 1 + rand() % 6;
		total = face1 + face2;
		++totalfrequency[total];
	}
	printf("%s%17s\n", "Total", "Frequency");
	for (total = 2; total < SIZE; total++)
	{
		printf("%5d%17d\n", total, totalfrequency[total]);
	}

	float persant_7 = ((float)totalfrequency[7] / 36000);
	printf("\nThe sum of 7 is %.4f%% of all combination \n\n", persant_7 * 100);

	system("pause");
	return 0;
}