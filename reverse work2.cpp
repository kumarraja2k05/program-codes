#include <iostream>  
using namespace std;  
int main()  
{  
int n, reverse=0, rem;    
cout<<"Enter a number: ";    
cin>>n; 
int *p; 
p=&n;
int *rev=&reverse;
int *r=&rem;  
  while(*p!=0)    
  {    
     *r=*p%10;      
     *rev=reverse*10+*r;    
     *p/=10;    
  }    
 cout<<"Reversed Number: "<<*rev<<endl;     
return 0;  
}  
