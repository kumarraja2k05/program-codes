#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char s[20],a[20];
    cout<<"enter the string "<<endl;
    cin>>s;
    int i=0,len=0,j;
    while(s[i]=!'\0')
    {
        len++;
        i++;
    }
    j=len-1;
    while(a[j]=!'\0')
    {
        a[i]=s[j];
        j--;
        i++;
    }
    cout<<"string after being reversed"<<endl<<a[i];
}
