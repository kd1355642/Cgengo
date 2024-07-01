#include<stdio.h>
main()
{
	int su;

	printf("®”‚ğ“ü—Í:");
	scanf("%d", &su);

	switch (su/10)
	{
	case 1:
		printf("‚P‚O“_‘ä‚Å‚·\n");
		break;
	case 2:
		printf("‚Q‚O“_‘ä‚Å‚·\n");
		break;
	case 3:
		printf("‚R‚O“_‘ä‚Å‚·\n");
		break;
	case 4:
		printf("‚S‚O“_‘ä‚Å‚·\n");
		break;
	default:
		printf("ƒGƒ‰[\n");
		break;
	}
}