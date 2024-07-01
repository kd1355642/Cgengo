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
	struct profile pro;
	printf("名前を入力：");
	scanf("%s", pro.name);
	printf("生年月日を空白で区切って入力：");
	scanf("%d%d%d", &pro.birth[0]
		, &pro.birth[1]
		, &pro.birth[2]);
	printf("血液型を入力：");
	scanf("%s", pro.blood);

	printf("%sーー", pro.name);
	printf("%d年%02d月%02d日生まれ　"
		, pro.birth[0]
		, pro.birth[1]
		, pro.birth[2]);
	printf("血液型ー%s型\n", pro.blood);
}