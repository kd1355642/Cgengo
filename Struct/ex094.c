#include<stdio.h>
#include<string.h>
struct profile
{
	char name[20];
	int birth[3];
	char blood[5];
};

main()
{
	struct profile student[5];
	struct profile* p;
	int i;

	p = &student[0];

	for (i = 0; i < 5; i++)
	{
		printf("%d人目(名前)：", i + 1);
		scanf("%s", p->name);
		printf("%d人目(生年月日)：", i + 1);
		scanf("%d%d%d", &p->birth[0]
			, &p->birth[1]
			, &p->birth[2]);
		printf("%d人目(血液型)：", i + 1);
		scanf("%s", p->blood);
		p++;//次のデータへ
	}

	//ｐに先頭アドレスを入れる
	p = &student[0];

	//A型のデータのみを表示する
	for (i = 0; i = 5; i++)
	{
		if (strcmp(p->blood, "A") == 0)//　A型か？　文字列比較はstrcmpを使う
		{
			printf("%sーー", p->name);
			printf("%d年%02d月%02d日生まれ　"
				, p->birth[0]
				, p->birth[1]
				, p->birth[2]);
			printf("血液型ー%s型\n", p->blood);
		}
		p++;//次のデータへ
	}
}
