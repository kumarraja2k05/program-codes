#include<iostream>
using namespace std;
class rectangle
{
    int l,b;
public:
    rectangle()
    {

    }
    ~rectangle()
    {

    }
    rectangle(int x,int y)
    {
        l=x;
        b=y;
    }
            void area()
            {
            cout<<"area="<<l*b;}

};
int main()
{
    int m,n;
    cin>>m>>n;
    rectangle r1(m,n);
    r1.area();

}
