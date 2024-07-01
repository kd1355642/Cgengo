#include<stdio.h>
main()
{
	int i;
	char s[80];
	printf("•¶š—ñ‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢„");
	scanf("%s", &s[0]);
	i = 0;
	while (s[i] != '\0')
	{
		s[i]++;
		i++;
	}
	printf("ˆÃ†‰»•¶š—ñ‚ÍA%s\n", &s[0]);
}