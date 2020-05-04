#include <iostream>
#include <string.h>
using namespace std;

int main()
{
	char a[100];
    char b[100];
    cin>>a>>b;
    cout<<strlen(a)<<"  "<<strlen(b)<<endl;
    char t[100];
    strcpy(t,a);
    cout<<strcat(a,b)<<endl;
    char s;
    s=t[0];
    t[0]=b[0];
    b[0]=s;
    cout<<t<<"  "<<b;
    return 0;
}
