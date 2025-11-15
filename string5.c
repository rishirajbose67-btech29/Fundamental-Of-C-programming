#include<stdio.h>
int main(){
char a[]={'a','n','a','n','d','\0'};
char b[]={'\0'};
printf("the source string is  %s",strlwr(a));
printf("the output string is %s",strcpy(b,a));
return 0;


}
