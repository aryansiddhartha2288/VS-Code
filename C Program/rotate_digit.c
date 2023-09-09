// Take three digit number from the user and rotate its digit by one position towarsds right   


#include<stdio.h>
int main()
{
    int x;
    printf("Enter three digit number ");
    scanf("%d",&x);
    printf("Before rotation %d \n",x);
    x=x%10*100+x/10;
    printf("After rotaion   %d",x);
    return 0;
}