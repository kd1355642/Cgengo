#include<stdio.h>

main()
{
	int s, i, d[] = { 10, 5, 30, 77, 16, 3, 47, 29, 33, 37 };

	printf("�T���l�́H");
	scanf("%d", &s);

	for (i = 0; i < 10; i++)
	{
		if (s == d[i])
		{
			break;
		}
	}

	if (i >= 10)  //if(s != d[i])�ł��n�j
	{
		printf("������Ȃ�����\n");
	}
	else
	{
		printf("data[%d]�ɂ�����\n",i);
	}
}