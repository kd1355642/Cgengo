#include<stdio.h>
void shisoku(int x, int y, int* wa, int* sa, int* sk, int* syo,int *am);

main()
{
	int a, b, c, d, e, f,g;
	printf(" ���l�H: ");
	scanf(" %d", &a);
	printf(" ���l�H: ");
	scanf(" %d", &b);
	shisoku(a, b, &c, &d, &e, &f,&g);
	puts("���l�Ɛ��l�̎l�����Z");
	printf("�a = %d �� = %d �� = %d �� =%d ���܂� =%d\n", c, d, e, f,g);
}

void shisoku(int x, int y, int* wa, int* sa, int* sk, int* syo,int *am)
{
	*wa = x + y;
	*sa = x- y;
	*sk = x * y;
	*syo = x / y;
	*am = x % y;
}