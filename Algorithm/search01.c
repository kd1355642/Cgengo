#include<stdio.h>

main()
{
	int s, i, d[] = { 10, 5, 30, 77, 16, 3, 47, 29, 33, 37 };

	printf("探索値は？");
	scanf("%d", &s);

	for (i = 0; i < 10; i++)
	{
		if (s == d[i])
		{
			break;
		}
	}

	if (i >= 10)  //if(s != d[i])でもＯＫ
	{
		printf("見つからなかった\n");
	}
	else
	{
		printf("data[%d]にあった\n",i);
	}
}