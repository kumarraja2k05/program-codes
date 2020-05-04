#include<iostream>
using namespace std;
int main()
{
    int a[20][20];
    int i,j,row,column;
    int add[20][20];
    cout<<"enter the element of the matrix";
    for(i=1;i<=4;i++)
    {
    	for(j=1;j<=4;j++)
    	{
		
        cin>>a[i][j];
    }}
    cout<<"enter the value of row";
    cin>>row;
    cout<<"enter the value of column";
    cin>>column;
    add[row][column]=1000+(4*(4*(row-1)+(column-1)));
    cout<<add[row][column];
    return 0;
}
