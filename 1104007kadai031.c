#include<stdio.h>
main()
{
	float i, j;
	printf("２つの実数値？");
	scanf("%f\t%f", &i, &j);
	if (i > j)
	{
		printf("大きいほうは=%f", i);
	}
	else
	{
		printf("大きいほうは=%f", j);
	}
}