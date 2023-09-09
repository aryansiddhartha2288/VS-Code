//printing array at given index 

#include<stdio.h>
#define MAX 5
int main()
{
    int array[MAX]={1,2,3,4};
    int index=2;
    int N=sizeof(array)/sizeof(array[0]);
    int newvalue=10;
    printf("printing array before insertion : ");
    for(int i=0;i<N;i++)
    {
        printf("%d ",array[i]);
    }
    if(MAX==N)
    {
        printf("\narray is full ");
    }
    else
    {
        for(int i=N;i>=2;i--)          //shifting the elements 
        {
            array[i+1]=array[i];
        }
        array[index]=newvalue;
        N++;
        printf("\nPrinting array after insertion  : ");
        for(int i=0;i<N;i++)
        {
            printf("%d ",array[i]);
        }
    }
    return 0;
}