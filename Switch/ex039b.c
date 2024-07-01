#include <stdio.h>
main()
{
	char shori;
	int su1, su2,su3,s;

	printf("処理を入力:");
	scanf("%c", &shori);

	printf("整数を入力:");
	scanf("%d%d%d", &su1, &su2,&su3);

	switch (shori)
	{
	case'd':
	case'D':
		s = su1;
		if (s < su2) { s = su2; }
		if (s < su3) { s = su3; }
			printf("最大値は%dです\n", s);
		break;
	case's':
	case'S':
		s = su1;
		if (s < su2) { s = su2; }
		if (s < su3) { s = su3; }
			printf("最小値は%dです\n", su1);
	case'g':
	case'G':
		printf("合計は%dです\n", su1 + su2 + su3);
		break;
	case'h':
	case'H':
		printf("平均は%.2fです\n", (su1 + su2 + su3) / 3.0);
		break;
	default:
		printf("エラー");
		break;
	}
}