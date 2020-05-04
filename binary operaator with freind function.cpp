#include<iostream>
using namespace std;
class comp
{
public: int real,img;
public:
    comp()
    {
        real=0;
        img=0;
    }
    comp(int x,int y)
    {
        real=x;
        img=y;
    }

    friend comp operator+(comp);
};
comp operator+(comp p,comp q)
{
    comp temp;
    temp.real=p.real+q.real;
    temp.img=p.img+q.img;
    cout<<temp.real<<"+"<<temp.img<<"i";


}
int main()
{
    comp s1(3,4);
    comp s2(5,8);
    comp s3;
    s3=s1+s2;


}
