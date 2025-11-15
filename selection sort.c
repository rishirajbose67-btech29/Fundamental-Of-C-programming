#include<stdio.h>
int main () {
int a[5]={10,13,26,45,7};
int b,c,smallest,pos;
for(int i=0;i<5;i++)
{
  smallest=a[i];
  for(int j=i;j<5;j++)
  {
  if(smallest>a[j])
  pos=j;
  }
  c=smallest;
  smallest=a[pos];
  a[pos]=c;

  }
  for(int k=0;k<5;k++)
  {
  printf("%d",a[k]);
  }
  return 0;
}
