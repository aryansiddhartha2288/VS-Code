#include<iostream>
using namespace std;
class complex
 {
 float x,y;
public:
complex() { } //default constructor
complex(float real, float imag)
 {
 x=real;
 y=imag;
 }
complex operator+(complex); // one argument is used here 
void dis();
};
complex complex ::operator+(complex c)
 {
complex temp;
temp.x=x+c.x;
temp.y=y+c.y;
return(temp);
}
void complex::dis()
{
cout<<x<<"+j"<<y<<endl;
}
int  main()
 {
 complex c1,c2,c3;
c1=complex(2.5,3.5);
c2=complex(1.6,2.7);
c3=c1+c2;
cout<<"C1=";
c1.dis();
cout<<"C2=";
c2.dis();
cout<<"C3=";
c3.dis();
return 0;
}