#include<stdio.h>
int main(){
char a[]={'a','n','a','n','d','\0'};
char b[]={'b','h','i','m','a','n','i','\0'};
printf("%s",strcmp(a));
if(strlen(a)>strlen(b))
printf("string a is greater than b");
else if(strlen(a)<strlen(b))
printf("string b is greater than a");
else
printf("both strings are same");
return 0;


}
