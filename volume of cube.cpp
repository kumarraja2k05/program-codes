#include<iostream>
using namespace std;
class cube
{
    int x;
public:
    cube()
    {

    }
    ~cube()
    {

    }
    cube(int a)
    {
        x=a;

    }
    void vol()
    {
        cout<<"  "<<x*x*x;
    }
};
int main()
{
    int a;
    cin>>a;
    cube c1(a);
    c1.vol();
}
