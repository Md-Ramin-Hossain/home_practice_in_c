#include<stdio.h>
int main()
{
char ch;
scanf("%c",&ch);
for(int i='a'; i<='z';i++)
{
    printf("%c ",i-32);
}
return 0;
}