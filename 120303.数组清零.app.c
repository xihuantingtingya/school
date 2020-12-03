#include<stdio.h>
#include<windows.h>
int main(){
int a,b;
int array2d[20][10]={
	{999,999,999,999,999,999,999,999,999,999},
};
for(a=0;a<20;a++){
	for(b=0;b<10;b++){
	array2d[a][b]=999;
		printf("%d ",array2d[a][b]);
	}
	printf("\n");
}
Sleep(5000);
for(a=0;a<20;a++){
	for(b=0;b<10;b++){
		array2d[a][b]=0;
		printf("%d ",array2d[a][b]);
	}
	printf("\n");
}
}
