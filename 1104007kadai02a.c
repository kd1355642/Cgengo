#include<stdio.h>
main()
{
	double i, j;
	printf("�Q�̎����l�H");
	scanf("%lf\t%lf", &i, &j);
	printf("������ %.1f �� %.1f �� �l�����Z ������\n", i, j);
	printf("�a = %f\t�� = %f\t�� = %f\t�� = %f", i + j, i - j, i * j, i / j);
}