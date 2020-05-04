#include<iostream>
using namespace std;
class A
{
protected:
    int l=4;
};
class B:public A
{
public:
    int b=6;
};
class C:public B
{
    public:void area()
    {
        cout<<"area="<<l*b;
    }
};
int main()
{
    A obj1;
    B obj2;
    C obj3;
    obj3.area();
}
