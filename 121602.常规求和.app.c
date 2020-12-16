#include<stdio.h>
int main(){
	int n,i;
	int sum=0;
	printf("input a number:\n");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		sum=sum+i;
	}
	printf("The sum:%d",sum);
	return 0;
}
