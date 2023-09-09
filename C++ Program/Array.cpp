#include<iostream>
using namespace std;
int main()
{
    int marks[4]={23,24,33,65};
    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    
    //change the value of array
    marks [3]=34499;

    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;

    //using loop
    cout<<"these are marks\n";
    for(int i=0;i<4;i++)
    cout<<"the value of marks "<<i<<" is " <<marks[i]<<endl;
    return 0;

}