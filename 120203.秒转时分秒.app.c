#include<stdio.h>
void main(){
int a,b,c,d;
printf("请输入秒数!\n");
scanf("%d",&a);
b=a/3600;
c=(a%3600)/60;
d=a-3600*b-60*c;
printf("%d时",b);
printf("%d分",c);
printf("%d秒",d);
}
