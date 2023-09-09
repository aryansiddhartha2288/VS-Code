#include<stdio.h>
int main()
{
    int a,b,c,D;
    printf("Enter value of a,b and c ");
    scanf("%d%d%d",&a,&b,&c);
    D=b*b-4*a*c;
    printf("D=%d\n",D);                        //print value of D
    if(D>0)
       printf("Real and distinct roots ");
    else if(D==0)
       printf("Real and distinct roots ");
    else
       printf("Real and distinct roots ");
    return 0;
}