#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"enter the elments";
	cin>>a>>b>>c;
	int *x=&a;
	int *y=&b;
	int *z=&c;
	if(*x>*y && *x>*z)
	cout<<"a is greater i.e="<<a;
	else if(*y>*z)
	cout<<"b is greater i.e="<<b;
	else
	cout<<"c is greater i.e="<<c;
	cout<<endl;
	cout<<"calculation of the smallest one"<<endl;
	if(*x<*y && *x<*z)
	cout<<"a is the smallest i.e="<<a;
	else if(*y<*z)
	cout<<"b is the smallest i.e="<<b;
	else
	cout<<"c is the smallest i.e="<<c;
}
