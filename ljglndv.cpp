#include<iostream>
using namespace std;
class point
{
    int x,y;
public:
    point()
    {
        x=5, y=0;
        cout<<"constructor called";
        cout<<endl<<x<<endl<<y;
    }

~point()
{
    cout<<endl<<"destructor called=";
}
point (int a,int b)
{
    x=a;
    y=b;
    cout<<"parameter constructor called";
    cout<<"   "<<x<<endl<<y;
}
};
int main()
{
    point p1;
    point p2(10,20);
}
