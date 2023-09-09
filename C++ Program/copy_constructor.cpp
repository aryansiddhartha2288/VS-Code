#include<iostream>
using namespace std;
class  A
{
int a;
public: A(int x)
{
a=x;
}
}; 
int main()
{
A obj1(4); //constructor is invoked
A obj2(obj1); // Copy Constructor
 return 0;
}