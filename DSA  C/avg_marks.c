#include<stdio.h>
int main()
{
    int marks[10],i,n,sum=0,avg;
    printf("enter numbers of elements \n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("number %d=",i+1);
        scanf("%d",&marks[i]);
        //sum=sum+marks[i];
        sum+=marks[i];
    }
    avg=sum/n;
    printf("average=%d",avg);
}