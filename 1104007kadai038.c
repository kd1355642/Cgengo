#include <stdio.h>
main()
{
	char moji;
	printf("�P�������� ");
	scanf("%c", &moji);
	if (moji >= 'A' && moji <= 'Z') {
		printf("�ϊ����ʂ� %c\n", moji + 0x20);
	}
	else {
		if (moji >= 'a' && moji <= 'z') {
			printf("�ϊ����ʂ� %c\n", moji - 0x20);
		}
		else {
			printf("�ϊ����ʂ� %c\n",moji);
		}
	}
}