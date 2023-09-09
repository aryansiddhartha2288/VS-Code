#include<iostream>
using namespace std;
class test
{
    int a;
    public:
    test():a(8){}
    void operator ++()
    {
        a=a+2;
    }
    void print(){
        cout<<"the count is "<<a;
    }
};
int main()
{
    test tt;
    ++tt;
    tt.print();
    return 0;
}