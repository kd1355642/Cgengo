#include<stdio.h>
int GetMax(int* array, int size);
int GetMin(int* array, int size);
main()
{
	int data[8] = { 6,10,8,2,9,5,1,7 };
	int Max, Min;
	Max = GetMax(data, 8);
	printf("Å‘å’l=%d\n", Max);
	Min = GetMin(data, 8);
	printf("Å¬’l=%d\n",Min);
}
int GetMax(int* array, int size)
{
	int Max, i;
	for (Max = *array, i = 1; i < size; i++)
	{
		if (Max < *(array + i))
		{
			Max = *(array + i);
		}
	}
	return Max;
}
int GetMin(int* array, int size)
{
	int Min, j;
	for (Min = *array, j = 1; j < size; j++)
	{
		if (Min > *(array + j))
		{
			Min = *(array + j);
		}
	}
	return Min;
}