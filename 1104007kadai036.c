#include<stdio.h>
main()
{
	int i, j;
	printf("®”‚PH");
	scanf("%d", &i);
	printf("®”‚QH");
	scanf("%d", &j);
	if (i > j)
	{
		printf("%d‚Ì•û‚ª%d‚æ‚è%d‘å‚«‚¢", i, j, i - j);
	}
	else if (i == j)
	{
		printf("%d‚Æ%d‚Í“™‚µ‚¢", i, j);
	}
	else if (i < j)
	{
		printf("%d‚Ì•û‚ª%d‚æ‚è%d¬‚³‚¢", i, j, j - i);
	}
}