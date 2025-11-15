#include<stdio.h>
int main()
{
    int grosssales,netsales;
    printf("Enter gross sales:");
    scanf("%d",&grosssales);
    netsales=grosssales-(grosssales/10);
    printf("The Netsale Is:",netsales);

   
    return 0;
}