#include<stdio.h>
int sum(int x){
	if(x<=0){
		return 0;
	}
	return x+sum(x-1);
}
void main(){
	printf("please input a number:\n");
	int x;
	scanf("%d",&x);
	printf("The sum is:%d",sum(x));
}
