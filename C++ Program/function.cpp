#include<iostream>
using namespace std;


void g();
int sum(int a,int b)
{
    int c=a+b;
    return c;
}

int main()
{
    int a,b;
    cout<<"enter first and second number\n";
    cin>>a>>b;
    cout<<"the sum is "<<sum(a,b);
    g();
    return 0;
}
 void g()
 {
    cout<<"\nhello , good morning";
 }