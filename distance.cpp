#include<iostream>
#include<math.h>
using namespace std;
class distance
{
    int x,y;
public:
    distance(){}

    distance (int a,int b)
    {
        x=a;
        y=b;
    }
    void point(distance m, distance n)
    {
        float t;
        t=sqrt((m.x-n.x)*(m.x-n.x)+(m.y-n.y)*(m.y-n.y));
        cout<<"area"<<t;
    }
    ~distance(){}

};
int main()
{
    distance r1(10,20);
    distance r2(20,30);
    r1.point(r1,r2);
    return 0;
}
