#include<stdio.h>
main()
{
	FILE* fp;
	int lv, hp;
	char str[256], equip[100], c;
	fp = fopen("file02.txt", "r");
	fscanf(fp, "%s", str);
	printf("õP:%s\n", str);
	fscanf(fp, "%s", str);
	printf("õQ:%s\n", str);
	fscanf(fp, "%s", str);
	printf("õR:%s\n", str);
	//
	fscanf(fp, "%d%d%s", &lv, &hp, &equip);
	printf("lv:%d hp:%d õ:%s\n", lv, hp, equip);
	//fgetsÌá
	c = fgetc(fp);
	fgets(str, sizeof(str), fp);
	printf("%s\n", str);
	fclose(fp);
}