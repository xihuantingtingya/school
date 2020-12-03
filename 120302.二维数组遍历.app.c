#include<stdio.h>
int main(){
int a,b;
int array2d[2][4]={
	{1,2,3,4},
	{5,6,7,8}
};
for(a=0;a<2;a++){
	for(b=0;b<4;b++){
		printf("%d\n",array2d[a][b]);
	}
	printf("\n");
}
return 0;
}
