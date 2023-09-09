#include<iostream>
using namespace std;
void print(int a, int b)
{
    cout<<"sum= "<<a+b<<endl;
}
void print(int a, int b, int c)
{
    cout<<"sum= "<<a+b+c<<endl;
}
int main()
{
    print(1,1,1);
    print(1,2,3);
    return 0;
}
