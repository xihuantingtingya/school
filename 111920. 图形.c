#include<stdio.h>
void main()
{
int a,b;
for(a=0;a<=4;a++)
{
for(b=4-a;b>=0;b--)	
printf("\n");
for(b=1;b<=a*2+1;b++)	
printf("*");
printf("\n");
}
 
