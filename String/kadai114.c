#include<stdio.h>
main()
{
	char moji[20];
	int s;
	printf("������́H")
	scanf("%s",&moji[0]);
	s = 0;
	while (moji[s] != '\n') {
		s++;
	}
	printf("������;%s ������:%d����\n", moji, s);
}