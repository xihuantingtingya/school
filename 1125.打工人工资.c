#include<stdio.h>
int main()
{
int m;
scanf("%d",&m);
if(m>=0 && m<=100)
{
printf("赤贫打工人");
}
else if(m>=101 && m<=1000)
{
printf("一般打工人");
}
else if(m>=1001 && m<=20000)
{
printf("土豪打工人");
}
else
printf("输入有误，请重新输入");
}
