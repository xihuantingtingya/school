#include<stdio.h>
#include<string.h>
int main(){
	char s1[]="天下没有不散的宴席!";
    char s2[]="时间可以改变很多的东西!";
	if(strcmp(s1,s2)==0){
		printf("相同");
	}
	else{
	printf("不相同");
	}
}
