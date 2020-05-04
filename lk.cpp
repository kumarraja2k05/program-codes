#include<iostream>
using namespace std;
class A
{
protected:
    int l=5;
};
class B:public A
{
public:
    int b=6;
    void area()
    {
        cout<<"area="<<l*b;
    }
};
int main()
{
    A obj1;
    B obj2;
    obj2.area();
}
