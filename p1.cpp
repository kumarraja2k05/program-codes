#include<iostream>
using namespace std;
int main()
{
    int fact=1,i,n;
    cout<<"enter the limit";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    cout<<fact;
    return 0;
}
