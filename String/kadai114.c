#include<stdio.h>
main()
{
	char moji[20];
	int s;
	printf("•¶š—ñ‚ÍH")
	scanf("%s",&moji[0]);
	s = 0;
	while (moji[s] != '\n') {
		s++;
	}
	printf("•¶š—ñ;%s •¶š”:%d•¶š\n", moji, s);
}