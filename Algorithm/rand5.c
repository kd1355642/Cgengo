#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main()
{
	int kazu,i;
	srand(time(0));

	for (i = 0; i < 100; i++) {
		rand();
		kazu = rand() % 300 + 1;
		printf("%03d ", kazu);
	}
}