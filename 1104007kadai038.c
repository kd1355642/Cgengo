#include <stdio.h>
main()
{
	char moji;
	printf("‚P•¶Žš“ü—Í ");
	scanf("%c", &moji);
	if (moji >= 'A' && moji <= 'Z') {
		printf("•ÏŠ·Œ‹‰Ê‚Í %c\n", moji + 0x20);
	}
	else {
		if (moji >= 'a' && moji <= 'z') {
			printf("•ÏŠ·Œ‹‰Ê‚Í %c\n", moji - 0x20);
		}
		else {
			printf("•ÏŠ·Œ‹‰Ê‚Í %c\n",moji);
		}
	}
}