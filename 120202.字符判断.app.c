#include<stdio.h>
int main(){
char m;
printf ("欢迎使用本程序!");
scanf ("%c",&m);
    switch (m){
    case 'w': printf("你在点击上键\n"); break;
    case 's': printf("你在点击下键\n"); break;
    case 'a': printf("你在点击左键\n"); break; 
    case 'd': printf("你在点击右键\n"); break;
    default: printf("输入错误，请输入w,s,a,d其中一个!\n"); 
	}
    return 0;
}
