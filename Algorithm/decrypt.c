#include<stdio.h>
main()
{
	int i;
	char s[80];
	printf("���������͂��Ă���������");
	scanf("%s", &s[0]);
	i = 0;
	while (s[i] != '\0')
	{
		s[i]--;
		i++;
	}
	printf("�Í���������́A%s\n", &s[0]);
}