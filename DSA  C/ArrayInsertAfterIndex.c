//printing array at after index 

#include<stdio.h>
#define MAX 5
int main()
{
    int array[MAX]={1,2,3,4};
    int index=2;
    int N=4;
    int newvalue=10;
    printf("printing array before insertion : ");
    for(int i=0;i<N;i++)
    {
        printf("%d ",array[i]);
    }
    for(int i=N;i>=2;i--)          //shifting the elements 
    {
        array[i+1]=array[i];
    }
    array[index+1]=newvalue;
    N++;
    printf("\nPrinting array after insertion  : ");
    for(int i=0;i<N;i++)
    {
        printf("%d ",array[i]);
    }
    return 0;
}