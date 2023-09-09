#include<iostream>
using namespace std;
class A
{
    int l,b;
    public:
    int area_cal(int x ,int y)
    {
        l=x;
        b=y;
        return(l*b);
    }
    int perimeter_cal(int x ,int y)
    {
        l=x;
        b=y;
        return(2*(l+b));
    }
};
int main(){
    A obj;
    int m,n;
    m=obj.area_cal(3,4);
    cout<<"area= "<<m<<endl;
    n=obj.perimeter_cal(3,4);
    cout<<"perimeter= "<<n;
    return 0;
}
