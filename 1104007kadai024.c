#include<stdio.h>
main()
{
	int ia,ib;
	printf("２つの数値？");
	scanf("%d\t%d", &ia, &ib);
	printf("＊＊＊ %d と %d の四則演算＊＊＊", ia, ib);
	printf("%d + \n%d = %d\n", ia, ib, ia + ib);
	printf("%d - %d = %d\n", ia, ib, ia - ib);
	printf("%d * %d = %d\n", ia, ib, ia * ib);
	printf("%d / %d = %d　あまり %d\n", ia, ib, ia / ib, ia % ib);
}