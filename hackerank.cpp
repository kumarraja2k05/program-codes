#include<iostream>
using namespace std;
int main()
{
    int n;
    long long int a[100000000000];
    long long int sum=0;
    cout<<"enter the no. digit to be entereed";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    cout<<sum;
    return 0;
}
