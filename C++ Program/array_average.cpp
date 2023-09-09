#include<iostream>
using namespace std;
int main()
{
  int A[4]={2,4,6,8};
  int B[4]={3,5,7,9};
int i;
float sum,c,average;
cout<<"c[4]={";
for(i=0;i<4;i++)
  {
    sum=A[i]+B[i];
    average=sum/2;
    c=average;
    cout<<c;
    if (i==3)
    break; 
    cout<<",";
  }
  cout<<"}";
  return 0;
}

