#include<iostream>
using namespace std;
int sum(int a,int b)
{
    int c=a+b;
    return c;
}
// This will not swap a and b
int swap(int a,int b)
{ 
    int temp=a;
    a=b;
    b=temp;
}

// Call by refrence by using pointer 
void swapPointer(int*a,int*b)
{
    int temp =*a;
    *a=*b;
    *b=temp;
}
int main()
{
    int x=4,y=5;
    cout<<"the sum of 4 and 5 is "<<sum(x,y)<<endl<<endl;
    cout<<"the value of x is "<<x<<" the value of y is "<<y<<endl;
    swapPointer (&x,&y);
    cout<<"the value of x is "<<x<<" the value of y is "<<y<<endl;
    return 0;
}
