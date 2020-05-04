#include<iostream>
using namespace std;
int main()
{
    int x;
    cout<<"enter the value of x \n";
    cin>>x;
    try
    {
        cout<<"in try statement\n";
        if(x<0)
        throw 'a';
        cout<<"after throw executes\n";
    }
    catch(int x)
    {
        cout<<"exception handling caught \n";
    }
    cout<<"after executing catch";
    return 0;
}

