#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main()
{
	int kazu, A,cnt=0;

	srand(time(0));
	rand();
	A = rand() % 1000 + 1;
	printf("�P�`�P�O�O�O�̒��œ�����̐���\�z���Ă�������\n");
	//while (kazu==A) {
		//printf("��������");
		//scanf("%d", &kazu);
		//if (kazu == A)break;
		//i++;
	do {
		printf("������̐��́H->");
		scanf("%d", &kazu);
		if (A > kazu) {
			printf("������̐���菬�����ł�\n");
		}
		if (A < kazu) {
			printf("������̐����傫���ł�\n");
		}
		cnt++;
	} while (A != kazu);
		printf("�����I%d��ڂœ�����܂���\n", cnt);
}