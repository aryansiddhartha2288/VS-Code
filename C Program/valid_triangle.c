#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter lenhth of sides of a triangle ");
    scanf("%d%d%d",&a,&b,&c);
    if((a+b)>c && (b+c)>a  && (c+a)>b)
      printf("side of triangle is valid ");
    else
      printf("side of triangle is not valid ");
    printf("\n");
    return 0;
}