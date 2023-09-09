#include<iostream>
using namespace std;

int main()
{  int age;
    cout<<"tell me your age\n";
    cin>>age;
        switch (age)
    {
    case 18:
    cout<<"you are 18\n";
        break;
     case 22:
    cout<<"you are 22\n";
        break;
     case 2:
    cout<<"you are 2\n";
        break;
    
    default:
    cout<<"No special cases\n";
        break;
    }
    
     return 0;
}