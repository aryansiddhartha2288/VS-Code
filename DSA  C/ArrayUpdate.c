//Array updation

#include<stdio.h>
int main()
{
    int array[]={1,2,3,4,5};
    int item=10,k=3;             //k=position 
    int n=5;
    printf("Elements are : ");
    for(int i=0;i<n;i++)
    {
        printf("%d ",array[i]);
    }
    array[k-1]=item;            // element insert
    printf("\nElements after updation are : ");
    for(int i=0;i<n;i++)
    {
        printf("%d ",array[i]);
    }
    return 0;
}