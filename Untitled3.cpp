#include<iostream>
using namespace std;
class A
{
public:
    int a=10;
};
class B:virtual public A
{
public:
    int b=20;
};
class C:virtual public A
{
   public: int c=30;
};
class D:public B,public C

{
    public:
    void show()
    {
        cout<<"addition="<<a+b+c;
    }
};
int main()
{
    D obj;
    obj.show();
}

