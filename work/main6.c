#define SIZE 5
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "task6.h"



int main()
{
	int arr[SIZE];
	srand(time(0));
	for (int i = 0; i < SIZE; i++)
	{
		switch (rand() % 2)
		{
		case 0:
			arr[i] = rand() % 9 + 1;
			break;
		case 1:
			arr[i] = -(rand() % 9 + 1);
		}
		printf("%d  ", arr[i]);
	}
	printf("Sum of numbers = %d\n", getSumMaxMin(arr, SIZE));
	return 0;

}