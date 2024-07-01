#include<stdio.h>

main()
{
	int s, i, d[] = { 10, 5, 30, 77, 16, 3, 47, 29, 33, 37 };

	printf("’Tõ’l‚ÍH");
	scanf("%d", &s);

	for (i = 0; i < 10; i++)
	{
		if (s == d[i])
		{
			break;
		}
	}

	if (i >= 10)  //if(s != d[i])‚Å‚à‚n‚j
	{
		printf("Œ©‚Â‚©‚ç‚È‚©‚Á‚½\n");
	}
	else
	{
		printf("data[%d]‚É‚ ‚Á‚½\n",i);
	}
}