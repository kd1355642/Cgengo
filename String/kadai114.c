#include<stdio.h>
main()
{
	char moji[20];
	int s;
	printf("文字列は？")
	scanf("%s",&moji[0]);
	s = 0;
	while (moji[s] != '\n') {
		s++;
	}
	printf("文字列;%s 文字数:%d文字\n", moji, s);
}