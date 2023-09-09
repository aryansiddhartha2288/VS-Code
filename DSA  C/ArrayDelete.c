// Array element deletion

#include<stdio.h>
int main()
{
    int array[]={1,2,3,4,5};
    int k=3,n=5;
    int j;
    printf("printing array before dletion :");
    for(int i=0;i<n;i++)
    {
       printf("%d ",array[i]);
    }
    j=k;
    while(j<n)
    {
        array[j-1]=array[j];
        j=j+1;
    }
    n=n-1;
    printf("\nPrinting array after dletion  :");
    for (int i=0; i<n; i++)
    {
        printf("%d ",array[i]);
    }
    return 0;
}
