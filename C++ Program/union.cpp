#include<iostream>
using namespace std;
struct employee
{
    int eid;
    char fav;
    float salary;
};
    union money
     {
        int rice;
        char car;
        float salary;
     };
int main()
{
    struct employee harry;
    union money m1;
    m1.rice=34;
    cout<<m1.rice;
    return 0;
}