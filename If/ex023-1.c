#include <stdio.h>
main()
{
	int hou, min, sec;
	printf("�b�������:");
	scanf("%d", &sec);
	if (sec >= 0) {
		if (sec <= 5000) {
			hou = sec / 3600;
			sec = sec % 3600;
			min = sec / 60;
			sec = sec % 60;
			printf("%d����%d��%d�b\n", hou, min, sec);
		}
		else {
			printf("���̓G���[:���͂�5000�܂łɂ��Ă�������\n");
		}
	}
	else {
		printf("�}�C�i�X�̓G���[�ł�\n");
	}
}
