#include<stdio.h>
main()
{
	char data[] = "Language";
	char* p_data;
	char ch;
	p_data = data;
	int i;

	int flg = 0;

	printf("data[] = %s\n",data);
	printf("検索文字は？");
	scanf("%c", &ch);

	printf("検索結果は、");
	for (p_data = data,i = 0; *(p_data + i) != '\0'; i++)
	{
		if (ch == *(p_data + i))
		{
			printf(" %d ", i + 1);
			flg = 1;
		}
	}

	if (flg == 1)
	{
		printf("文字目です\n");
	}
	else
	{
		printf("、、見つかりませんでした...\n");
	}

}
