#include<stdio.h>
main()
{
	int i;
	printf("0から100までの整数？");
	scanf("%d", &i);
	if (i >= 90)
	{
		printf("その数値の判定結果は「５」です");
	}
	else if(i >= 80 && 90 > i)
	{
		printf("その数値の判定結果は「４」です");
	}
	else if(i >= 50 && 80 > i)
	{
		printf("その数値の判定結果は「３」です");
	}
	else if(i >= 30 && 50 > i)
	{
		printf("その数値の判定結果は「２」です");
	}
	else
	{
		printf("その数値の判定結果は「１」です");
	}
}