#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main()
{
	int kaisin;

	srand(time(0));
	rand();
	kaisin = rand() %100+1;
	if (kaisin <= 30)
	{
		printf("かいしんのいちげき！\n");
	}
	else {
		printf("通常攻撃\n");
	}
}