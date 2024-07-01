#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main()
{
	int kazu, A,cnt=0;

	srand(time(0));
	rand();
	A = rand() % 1000 + 1;
	printf("‚P`‚P‚O‚O‚O‚Ì’†‚Å“–‚½‚è‚Ì”‚ğ—\‘z‚µ‚Ä‚­‚¾‚³‚¢\n");
	//while (kazu==A) {
		//printf("”‚ğ“ü‚ê‚Ä");
		//scanf("%d", &kazu);
		//if (kazu == A)break;
		//i++;
	do {
		printf("“–‚½‚è‚Ì”‚ÍH->");
		scanf("%d", &kazu);
		if (A > kazu) {
			printf("“–‚½‚è‚Ì”‚æ‚è¬‚³‚¢‚Å‚·\n");
		}
		if (A < kazu) {
			printf("“–‚½‚è‚Ì”‚æ‚è‘å‚«‚¢‚Å‚·\n");
		}
		cnt++;
	} while (A != kazu);
		printf("³‰ğI%d‰ñ–Ú‚Å“–‚½‚è‚Ü‚µ‚½\n", cnt);
}