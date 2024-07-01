#include <stdio.h>
main()
{
	int hou, min, sec;
	printf("秒数を入力:");
	scanf("%d", &sec);
	if (sec >= 0) {
		if (sec <= 5000) {
			hou = sec / 3600;
			sec = sec % 3600;
			min = sec / 60;
			sec = sec % 60;
			printf("%d時間%d分%d秒\n", hou, min, sec);
		}
		else {
			printf("入力エラー:入力は5000までにしてください\n");
		}
	}
	else {
		printf("マイナスはエラーです\n");
	}
}
