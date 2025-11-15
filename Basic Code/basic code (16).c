#include <stdio.h>
int main(){
    float byte,kb,mb,gb;
    printf("enter the number of bytes :");
    scanf("%f", &byte);
    kb = byte/1024;
    mb = kb/1024;
    gb = mb/1024;

    printf("Your value in KB is: %f \n Your value in MB is %f \n Your value in GB is %f\n", kb,mb,gb);


    return 0;
}
