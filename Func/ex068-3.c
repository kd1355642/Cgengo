//getchar�֐����g�p�����A���P�������͂̒�΃p�^�[��

#include<stdio.h>
main()
{
	int c; //getchar�֐��́u���͏I���v�̏ꍇ��EOF(-1)��߂�l�Ƃ��ĕԂ�����

	//�A���P�������͂̒�΃p�^�[��	
	while ((c = getchar()) != EOF)
	{
		putchar(c);
	}
}