#include<stdio.h>
int main()
{
    int i=1;

    while(i<=10)
    {
        printf("%d ",(11-i)*(11-i));
        i++;
    }
    printf("\n");
    return 0;
}