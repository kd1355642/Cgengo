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
		printf("%d�l��(���O)�F", i + 1);
		scanf("%s", p->name);
		printf("%d�l��(���N����)�F", i + 1);
		scanf("%d%d%d", &p->birth[0]
			, &p->birth[1]
			, &p->birth[2]);
		printf("%d�l��(���t�^)�F", i + 1);
		scanf("%s", p->blood);
		p++;//���̃f�[�^��
	}

	//���ɐ擪�A�h���X������
	p = &student[0];

	//A�^�̃f�[�^�݂̂�\������
	for (i = 0; i = 5; i++)
	{
		if (strcmp(p->blood, "A") == 0)//�@A�^���H�@�������r��strcmp���g��
		{
			printf("%s�[�[", p->name);
			printf("%d�N%02d��%02d�����܂�@"
				, p->birth[0]
				, p->birth[1]
				, p->birth[2]);
			printf("���t�^�[%s�^\n", p->blood);
		}
		p++;//���̃f�[�^��
	}
}
