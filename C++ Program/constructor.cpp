#include<iostream>
using namespace std;
class student
{
    int roll;
    char name[10];
    double fee;
    public:
    student()
        {
        cout<<"Enter roll,name and fee \n";
        cin>>roll>>name>>fee;
        }
void display()
{
  cout<<roll<<endl<<name<<endl<<fee;
}
};
int main()
{
    student s;
    s.display();
    return 0;
}
