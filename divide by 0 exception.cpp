#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"enter the value=\n";
    cin>>a>>b;
    try
    {
        if(b==0)
            throw b;
        cout<<"a/b="<<a/b<<endl;
    }
    catch(int k)
    {
        cout<<"not divisible by zero\n"<<b;
    }
}
