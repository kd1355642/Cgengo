#include<stdio.h>
main()
{
	int i, j;
	printf("�����P�H");
	scanf("%d", &i);
	printf("�����Q�H");
	scanf("%d", &j);
	if (i > j)
	{
		printf("%d�̕���%d���%d�傫��", i, j, i - j);
	}
	else if (i == j)
	{
		printf("%d��%d�͓�����", i, j);
	}
	else if (i < j)
	{
		printf("%d�̕���%d���%d������", i, j, j - i);
	}
}