#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main()
{
	int kazu, A,cnt=0;

	srand(time(0));
	rand();
	A = rand() % 1000 + 1;
	printf("１〜１０００の中で当たりの数を予想してください\n");
	//while (kazu==A) {
		//printf("数を入れて");
		//scanf("%d", &kazu);
		//if (kazu == A)break;
		//i++;
	do {
		printf("当たりの数は？->");
		scanf("%d", &kazu);
		if (A > kazu) {
			printf("当たりの数より小さいです\n");
		}
		if (A < kazu) {
			printf("当たりの数より大きいです\n");
		}
		cnt++;
	} while (A != kazu);
		printf("正解！%d回目で当たりました\n", cnt);
}