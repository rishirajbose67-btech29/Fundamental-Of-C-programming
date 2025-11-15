#include <stdio.h>
void main()
{
    int a,i=0;
    printf("Enter the value of n : ");
    scanf("%d", &a);

    do
    {if (i%2==0)
    {
        printf("%d\n",i);
        i++;
        
    }
    
     } while (i<2*a);

}