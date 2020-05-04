#include<iostream>
using namespace std;
class A
{
public:
    int l;
    A()
    {
       cout<<"default constructor called"<<endl;
    }
};
class B:public A
{
public:
    int b;
    ~B()
    {
        cout<<"distructor called"<<endl;
    }
};
class C:public B
{
public:
    C (int x, int y)
    {
        l=x;
        b=y;
        cout<<"area="<<l*b<<endl;
    }



};
int main()
{
    A obj1;
    B obj2;
    int p1,p2;n
    cout<<"enter the parameter";
    cin>>p1>>p2;
    C obj3(p1,p2);


}
