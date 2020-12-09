#include<stdio.h>
void main()
{
	int value=0;
	int a,b;
	int array2d[19][20]={
		{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	};
for(a=0;a<19;a++){
	for(b=0;b<20;b++){
		value++;
		array2d[a][b]=value;
		printf("%d ",array2d[a][b]);
}
	printf("\n");
}
}
