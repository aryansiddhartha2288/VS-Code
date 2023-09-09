#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    int roll;
    char name[10];
    ofstream ofn;
    ofn.open("C:\\Users\\aryan ");
    cout<<"Enter your roll and name ";
    cin>>roll>>name;
    ofn<<roll<<name;
    ofn.close();
    return 0;
}
