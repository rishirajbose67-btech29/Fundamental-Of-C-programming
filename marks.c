#include<stdio.h>
int main()
{
    int math,chem,phy,total,average;
    printf("Enter The marks Of Three Subjects:");
    scanf("%d %d %d",&math,&chem,&phy);
    total=(math+chem+phy);
    average=(math+chem+phy)/3;
    printf(" The total marks Of Three Subjects:%d\n",total);
     printf(" The average marks Of Three Subjects:%d\n",average);


    return 0;
}