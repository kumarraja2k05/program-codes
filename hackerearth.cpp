

#include <iostream>

using namespace std;

int main() {
    int a[20];
    int testcase,n,i,k,floor=1;
	cout<<"enter the test case";
	cin>>testcase;
	cout<<"enter the no. of elements of the array";
	cin>>n;
	cout<<"enter the elements of array";
	for(i=0;i<n;i++)
	{cin>>a[i];}
	cout<<"enter the value of s";
	cin>>k;
	for(i=0;i<n;i++)
	{
	    int sum=0;
	    sum=sum+a[i];
	    if(sum==k)
	    {floor=1;
	    break;}
	}
	if(floor==1)
	cout<<"yes";
	else
	{cout<<"no";}
	return 0;

}

