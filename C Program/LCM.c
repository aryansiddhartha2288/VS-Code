// To find LCM of number   LCM=Least Common Multiple

#include<stdio.h>
int main()
{
    int a,b,L;
    printf("Enter two number ");
    scanf("%d%d",&a,&b);
    for(L=a>b?a:b;L<=a*b;L++)
       if(L%a==0 && L%b==0)
       break;
    printf("LCM is %d",L);
    printf("\n");
    return 0;
}