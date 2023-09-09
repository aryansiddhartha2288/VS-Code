//print first N odd natural number

#include<stdio.h>
int main()
{
    int n,i=1;
    printf("Enter a number ");
    scanf("%d",&n);
    while(i<=n)
    {
        printf("%d ",2*i-1);
        i++;
    }
    printf("\n");
    return 0;
}