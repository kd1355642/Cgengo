#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main()
{
	int un,i;
	//i = 0;

	srand(time(0));
	rand();
	un = rand() % 5 + 1;
	printf("今日のあなたの運勢は、");
	//while (i<un) {
	//printf("☆");
	//	i += 1;
	//}
	for (i = 0; i < un; i++) {
		printf("☆");
	}
	printf("です。\n");
}