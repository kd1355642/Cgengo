#include<stdio.h>
main()
{
	char str[] = "orange";
	int cnt;

	//空文
	for (cnt = 0; str[cnt] != '\0'; cnt++);

	cnt = 0;
	while (str[cnt] != '\0')
	{
		cnt++;
	}
	printf("文字列:%s\n", &str[0]);
	printf("文字数は%d文字\n", cnt);
}