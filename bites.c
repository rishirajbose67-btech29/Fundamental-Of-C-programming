#include<stdio.h>
int main()
{
    long a,converter;
    printf("Enter The Value In Bytes:");
    scanf("%ld",&a);
    converter=a*1000;
    printf("The Value Of %ld in KB is:%ld\n",a,converter);
    converter=a*1000000;
    printf("The Value Of %ld in MB is:%ld\n",a,converter);
    converter=a*1000000000;
    printf("The Value Of %ld in GB is:%ld\n",a,converter);


    return 0;
}