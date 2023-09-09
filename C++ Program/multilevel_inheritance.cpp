#include<iostream>
using namespace std;
class animal
{
    public:
    void eat(){
        cout<<"eating.....\n"; 
     }
};
class dog: public animal
{
    public:
    void bark(){
        cout<<"barking....\n";
    }
};
class puppy :public dog
{
    public:
    void cute(){
       cout<<"cutenes....\n"; 
    }
};
int main(){
    puppy p1;
    p1.eat();
    p1.bark();
    p1.cute();
    return 0;
}
