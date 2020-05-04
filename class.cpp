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
class B
{
public:
    int b=5;
    void show()
    {

        cout<<endl<<"derived class value="<<b;
    }
};
class C:public A,public B
{
   public:
        void s()
    {
    cout<<endl<<"multiple inheritance ambiguity example addition="<<a+b;
    }
};
int main()
{
    C  obj;
    obj.A::show();
    obj.B::show();
    obj.s();
}
