#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
    int s,i,n,a[1000],b[1000];
    int j;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(j=n-1;j>0;j--)
    {
        s=a[i];
        a[i]=b[j];
        b[j]=s;
        i++;
    }
    for(j=n-1;j>=0;j--)
    {
        cout<<a[j];
    }
    return 0;
}

