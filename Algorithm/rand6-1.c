#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main()
{
	int ai, te;

	srand(time(0));
	printf("�����o���܂����H\n");
	printf("�P:�O�[�@�Q:�`���L�@�R:�p�[");
	scanf("%d", &te);

	te--;
	if (te == 0)printf("�v���C���[�̓O�[�ł��B\n");
	if (te == 1)printf("�v���C���[�̓`���L�ł��B\n");
	if (te == 2)printf("�v���C���[�̓p�[�ł��B\n");
	ai = rand() % 3;
	if (ai == 0)printf("�R���s���[�^�[�̓O�[�ł��B\n");
	if (ai == 1)printf("�R���s���[�^�[�̓`���L�ł��B\n");
	if (ai == 2)printf("�R���s���[�^�[�̓p�[�ł��B\n");

	