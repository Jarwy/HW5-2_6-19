#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define SIZE 13

int main(void)
{
	int counter;
	size_t face1;
	size_t face2;
	size_t total;
	int freq[SIZE] = { 0 };

	srand(time(NULL));

	for (counter = 1; counter <= 36000; counter++)
	{
		face1 = rand() % 6 + 1;
		face2 = rand() % 6 + 1;
		total = face1 + face2;
		++freq[total];
	}

	printf("%s%17s\n", "Face", "Frequency");

	for (total = 2; total < SIZE; total++)
	{
		printf("%4d%17d\n", total, freq[total]);
	}



	system("pause");
	return 0;
}