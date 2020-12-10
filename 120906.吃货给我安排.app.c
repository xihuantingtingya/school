#include<stdio.h>
#include<string.h>
void main()
{   printf("吃货的日程总是被安排的明明白白，节日你都吃些什么？\n");
    printf("请输入:");
    char a[30];
    char b[]="春节";
	char c[]="端午节";
	char d[]="中秋节";
	char e[]="元宵节";
	scanf("%s",&a);
	if(strcmp(a,b)==0)
	{
		printf("给我安排饺子");
	}
	else if(strcmp(a,c)==0)
		{
		printf("给我安排粽子");
		}
	else if(strcmp(a,d)==0)
		{
		printf("给我安排月饼");
		}
	else if(strcmp(a,e)==0)
		{
		printf("给我安排元宵");
		}
    else 
		{
		printf("输入错误，没有此节日！");
		}
}
