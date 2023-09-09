#include<iostream>
using namespace std;
class A
 {
 public:
virtual void show()=0;  //pure virtual function
void dis()
{
cout<<"this is base class\n";
 }
 };
class B:public A
 {
 public:
 void show()
 {
 cout<<"This is Derived Class\n";
 }
};
int main()
 {
 A *obj1;
 B obj2;
 obj1=&obj2;
 obj1->dis();     // base class function is called
 obj2.dis();      // base class function is called
 obj2.show();     //derived class function is called 
 return 0;
 }