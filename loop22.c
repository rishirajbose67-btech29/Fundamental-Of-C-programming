#include<stdio.h>
int main(){
int num;
scanf("%d",&num);
if(num>0 && num<=9)
printf("number of digits is 1:");
if(num>9 && num<=99)
printf("number of digits is 2:");
if(num>99 && num<=999)
printf("number of digits is 3:");
return 0;
}
