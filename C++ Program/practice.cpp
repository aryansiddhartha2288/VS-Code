// accept three number and find their sum
/*
#include<iostream>
using namespace std;
int main()
{
    cout<<"enter any three number ";
    int  a,b,c,sum;
    cin>>a>>b>>c;
    cout<<" three number are "<<a<<" "<<b<<" "<<c;
    a=4,b=4,c=4;
    sum=a+b+c;
    cout<<"\n sum of a,b and c is "<<sum;
    return 0;
}
*/

// increment and decreement opearor
/*
#include<iostream>
using namespace std;
int main()
{
    int a=3;
    int b=9;
    cout<<++a<<" "<<++a<<endl;
    cout<<--b<<" "<<++b;
    return 0;
}
*/

//even or odd number
/*
#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<" enter the number ";
    cin>>a;
    if (a%2==0)
    cout<<"even  ";
    else
    cout<<"odd ";
    return 0;
}
*/

//switch case
/*
#include<iostream>
using namespace std;
int main()
{
    int a,b,c,sum,difference,area,perimeter;
    cout<<" enter the one no. between 1 and 4 \n";
    cin>>a;
    switch (a)
    {
    case 1:
    cout<<"enter the value of a and b ";
    cin>>a>>b;
    c=a+b;
    cout<<" sum="<<c;
    break;

    case 2:
    cout<<"enter the value of a and b ";
    cin>>a>>b;
    c=a-b;
    cout<<" difference="<<c;
    break;

    case 3:
    cout<<"enter the value of a and b ";
    cin>>a>>b;
    c=a*b;
    cout<<"area="<<c;
    break;

    case 4:
    cout<<" enter the value of a and b ";
    cin>>a>>b;
    c=2*(a+b);
    cout<<"perimeter="<<c;
    break;
    default:
    cout<<"wrong choice ";
    }
}
*/

//loop
/*
#include<iostream>
using namespace std;
int main()
{
    for(int i=1;i<=10;i++)
    cout<<i<<" ";
    return 0;
}
*/
