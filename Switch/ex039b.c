#include <stdio.h>
main()
{
	char shori;
	int su1, su2,su3,s;

	printf("���������:");
	scanf("%c", &shori);

	printf("���������:");
	scanf("%d%d%d", &su1, &su2,&su3);

	switch (shori)
	{
	case'd':
	case'D':
		s = su1;
		if (s < su2) { s = su2; }
		if (s < su3) { s = su3; }
			printf("�ő�l��%d�ł�\n", s);
		break;
	case's':
	case'S':
		s = su1;
		if (s < su2) { s = su2; }
		if (s < su3) { s = su3; }
			printf("�ŏ��l��%d�ł�\n", su1);
	case'g':
	case'G':
		printf("���v��%d�ł�\n", su1 + su2 + su3);
		break;
	case'h':
	case'H':
		printf("���ς�%.2f�ł�\n", (su1 + su2 + su3) / 3.0);
		break;
	default:
		printf("�G���[");
		break;
	}
}