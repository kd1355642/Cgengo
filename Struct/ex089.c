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
	printf("���O����́F");
	scanf("%s", pro.name);
	printf("���N�������󔒂ŋ�؂��ē��́F");
	scanf("%d%d%d", &pro.birth[0]
		, &pro.birth[1]
		, &pro.birth[2]);
	printf("���t�^����́F");
	scanf("%s", pro.blood);

	printf("%s�[�[", pro.name);
	printf("%d�N%02d��%02d�����܂�@"
		, pro.birth[0]
		, pro.birth[1]
		, pro.birth[2]);
	printf("���t�^�[%s�^\n", pro.blood);
}