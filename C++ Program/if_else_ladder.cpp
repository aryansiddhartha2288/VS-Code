#include<iostream>

using namespace std;
int main()
{
    int age;
    cout<<"tell me your age\n";
    cin>>age;
    if((age<18)  && (age>0))
    {
        cout<<"you can't come my party";
    }
     else if(age==18)
     {
        cout<<"you get a pass for party";
     }
      else if(age<1)
     {
        cout<<"You are not born";
     }
     else{
        cout<<"you come to party";
     }
     return 0;

}