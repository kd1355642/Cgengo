#include<stdio.h>
main()
{
	float box[3], gokei = 0;
	int i;

	for (i = 0; i < 3; i++)
	{
		printf("���������:");
		scanf("%f", &box[i]);
		gokei += box[i];
	}

	printf("���v��%.2f�ł�\n", gokei);
	printf("���v��%.2f�ł�\n", gokei/3);
}