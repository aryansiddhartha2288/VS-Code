#include<iostream>
using namespace std;

int main()
{
    int i,n;
    cout<<"enter a number to print table\n";
    cin>>n;
    for(i=1;i<=10;i++)
    {
       cout<<n<<"*"<<i<<"="<<n*i<<endl;
    }
    return 0;
}