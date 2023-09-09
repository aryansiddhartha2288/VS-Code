#include<iostream>
using namespace std;
int main()
{
    int marks[4]={23,24,33,65};
    int *P = marks;
    cout<<"the value of *p is"<<*P<<endl;
    cout<<"the value of *(p+1) is "<<*(P+1)<<endl;
    cout<<"the value of *(p+2) is "<<*(P+2)<<endl;
    cout<<"the value of *(p+3) is "<<*(P+3)<<endl;
    return 0;
}