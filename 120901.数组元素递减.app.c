#include<stdio.h>
void main()
{
	int value=91;
	int a,b;
	int array2d[9][10]={
		{0,0,0,0,0,0,0,0,0,0},
	};
for(a=0;a<9;a++){
	for(b=0;b<10;b++){
		value--;
		array2d[a][b]=value;
		printf("%d ",array2d[a][b]);
}
	printf("\n");
}
}
