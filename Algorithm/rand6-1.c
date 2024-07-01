#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main()
{
	int ai, te;

	srand(time(0));
	printf("何を出しますか？\n");
	printf("１:グー　２:チョキ　３:パー");
	scanf("%d", &te);

	te--;
	if (te == 0)printf("プレイヤーはグーです。\n");
	if (te == 1)printf("プレイヤーはチョキです。\n");
	if (te == 2)printf("プレイヤーはパーです。\n");
	ai = rand() % 3;
	if (ai == 0)printf("コンピューターはグーです。\n");
	if (ai == 1)printf("コンピューターはチョキです。\n");
	if (ai == 2)printf("コンピューターはパーです。\n");

	