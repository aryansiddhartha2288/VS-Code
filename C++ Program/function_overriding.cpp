#include<iostream>
using namespace std;
class animal
{
    private :
    void eat()
    {
        cout<<"eating....";
    }
};
class dog:private animal
{
    public:
    void eat()
    {
        cout<<"Eating bread ....";
    }
};
int main(){
    dog d;
    d.eat();
    return 0;
}

