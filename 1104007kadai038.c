#include <stdio.h>
main()
{
	char moji;
	printf("１文字入力 ");
	scanf("%c", &moji);
	if (moji >= 'A' && moji <= 'Z') {
		printf("変換結果は %c\n", moji + 0x20);
	}
	else {
		if (moji >= 'a' && moji <= 'z') {
			printf("変換結果は %c\n", moji - 0x20);
		}
		else {
			printf("変換結果は %c\n",moji);
		}
	}
}