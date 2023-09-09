#include<iostream>
using namespace std;
class A
{
 protected:
 int a;
 public:
 void get_a(int n)
 {
   a=n;
 }
};
class B 
{
    protected:
    int b;
    public:
    void get_b(int n)
    {
      b=n;  
    }
};
class Q: public A ,public B
{
   public:
    void display(){
    cout<<"the value of a is "<<a<<endl;
    cout<<"the value of b is "<<b<<endl;
    cout<<"sum of a & b is "<<a+b<<endl;
}
};
int main(){
Q obj;
obj.get_a(4);
obj.get_b(9);
obj.display();
}