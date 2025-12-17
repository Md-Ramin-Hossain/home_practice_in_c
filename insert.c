#include<stdio.h>
int main()
{
int n;
scanf("%d",&n);
int array[n];
for(int i=0; i<n; i++)
{
    scanf("%d", &array[i]);
}
int poss,value;
scanf("%d %d",&poss,&value);
for(int i=n; i>=poss+1; i--)
{
    array[i]=array[i-1];
}
array[poss]=value;
for(int i=0; i<=n;i++)
{
    printf("%d ",array[i]);
}
return 0;
}
