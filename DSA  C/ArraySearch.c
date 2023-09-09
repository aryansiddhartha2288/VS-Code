// Searching of array eements 

#include<stdio.h>
int main()
{
    int array[]={1,2,3,4,5};
    int item=4,n=5;
    int i,j=0;
    printf("Elements are : ");
    for(int i=0;i<n;i++)
    {
        printf("%d ",array[i]);
    }
    while(j<n)
    {
        if(array[i]==item)
        break;
        j=j+1;
    }
    printf("\nElement is found at %d position= %d",j-1,item);
    return 0;
}