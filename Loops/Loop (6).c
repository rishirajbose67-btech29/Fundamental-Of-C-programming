#include <stdio.h>
int main(){
    int n,s=0;
    printf("Enter the value of n :");
    scanf("%d",&n);

    for(int i=1 ; i<=n ; i++)
    {
        s=s+(2*i);
    }
    printf("Sum is %d\n",s);



    return 0;
}
