#include <stdio.h>
int main(){
    int n,s;
    printf("Enter the value of n :");
    scanf("%d",&n);

    for(int i=1 ; i<=n ; i++)
    {
        s=s*(i);
    }
    printf("Sum is %d\n",s);



    return 0;
}
