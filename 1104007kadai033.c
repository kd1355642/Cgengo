#include<stdio.h>
main()
{
	char i;
	printf("アルファベット？");
	scanf("%c", &i);
	if ('A' <= i && i <= 'Z')
	{
		printf("その文字は「大文字」です\n");
	}
	if('a' <= i && i <= 'z')
	{
		printf("その文字は「小文字」です\n");
	}
}