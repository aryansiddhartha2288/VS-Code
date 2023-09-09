#include<iostream>
using namespace std;

struct employee
{
     /* data */
     int eid;
    char fav;
    float salary;
};

int main()
{
    struct employee harry;
    harry.eid =1;
    harry.fav ='c';
    harry.salary= 120000;
    cout<<harry.eid<<endl;
    cout<<harry.fav<<endl;
    cout<<harry.salary<<endl;
    return 0;
} 