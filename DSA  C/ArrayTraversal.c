// Traversal of array

#include<stdio.h>
int main()
{
    int size;
    printf("enter size of an array ");
    scanf("%d",&size);
    int array[size];
    printf("enter elements in array\n");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&array[i]);
    }
    printf("elements are : ");
    for(int i=0;i<size;i++)
    {
        printf("%d ",array[i]);
    }
    return 0;
}