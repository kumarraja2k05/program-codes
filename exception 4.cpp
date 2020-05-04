#include<iostream>
using namespace std;
int main()
{
    int fact=1,i,n;
    cout<<"enter the value of the no. whose factorial to be found=\n";
    cin>>n;
    try
    {
        try
        {
        for(i=1;i<=n;i++)
        {
            fact=fact*i;
        }
        if(fact>0)
        throw 10;
        cout<<"factorial is negative\n";
        }
        catch(int k)
        {
            cout<<"factorial is positive= \n"<<fact<<endl;
            throw 20;
            cout<<"factorial of no. is positive=\n";
        }
    }
    catch(int x)
    {
        for(i=-1;i>=n;i++)
                {
                    fact=fact*i;
                }
                cout<<"factorial of negative no. is not possible"<<endl;
    }

}
