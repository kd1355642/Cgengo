#include<stdio.h>

struct day
{
	int nen;
	int tuki;
	int hi;
};

struct profile
{
	char name[20];
	struct day birth;
	char blood[5];
};

main()
{
	struct profile student[5] =
	{
		{"アーサー"			, { 2000, 1, 1 }	,"A" },
		{ "ルシファー"		, { 2000, 2, 2 }	, "B" },
		{ "クシナダ"		, { 2000, 1, 3 }	, "O" },
		{ "ネオ"			, { 2000, 1, 4 }	, "AB" },
		{ "マサムネ"		, { 2000, 2, 5 }	, "A" },
	};
	struct profile* p;
	int i;

	//ｐに先頭アドレスを入れる
	p = &student[0];

	//2月生まれのデータのみを表示する
	for (i = 0; i < 5; i++)
	{
		if (p->birth.tuki == 2)//　２月生まれか？
		{
			printf("%sーー", p->name);
			printf("%d年%02d月%02d日生まれ　"
				, p->birth.nen
				, p->birth.tuki
				, p->birth.hi);
			printf("血液型ー%s型\n", p->blood);
		}
		p++;//次のデータへ
	}
}
