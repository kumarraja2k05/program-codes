#include<iostream>
using namespace std;
class A
{
    public:
    int a=5;

    void show()
    {
        cout<<"value of a="<<a;
    }
};
class B:public A
{
public:
    int b=5;
    void show()
    {

        cout<<endl<<"derived class value="<<b;
    }
};
int main()
{
    B obj;
    obj.A::show();
    obj.B::show();
}
