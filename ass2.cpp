#include <cstdlib>
#include <iostream>
#include<iomanip>
 
using namespace std;
 
void displaymenu(){
cout<<"==================================================="<<"\n";
cout<<"                         MENU                                  "<<"\n";
cout<<"==================================================="<<"\n";
cout<<"     1.Add"<<"\n";
cout<<"     2.Subtract"<<"\n";
cout<<"     3.Multiply"<<"\n";
cout<<"     4.Divide"<<"\n";
cout<<"     5.Modulus"<<"\n";
     }
int Add(int a,int b){
    return(a+b);
}
 
int Substract(int a, int b){
    return(a-b);
}
 
int Multiply(int a, int b){
    return(a*b);
}
float Divide(int a,int b){
      return(a/b);
}
int Modulus(int a, int b){
    return(a%b);
}
 
int main(int argc, char *argv[])
{
 //show menu
displaymenu();
int yourchoice;
int a;
int b;
char confirm;
do
{
cout<<"Enter your choice(1-5):";
cin>>yourchoice;
cout<<"Enter your two integer numbers:";
cin>>a>>b;
cout<<"\n";
switch(yourchoice){
 case 1:cout<<"Result:"<<Add(a,b);break;
 case 2:cout<<"Result:"<<Substract(a,b);break;
 case 3:cout<<"Result:"<<Multiply(a,b);break;
 case 4:cout<<"Result:"<<Divide(a,b);break;
 case 5:cout<<"Result:"<<Modulus(a,b);break;
 default:cout<<"invalid";
                   }
                  
cout<<"\nPress y or Y to continue:";
       cin>>confirm;
}while(confirm=='y'||confirm=='Y');
  system("PAUSE");
   return EXIT_SUCCESS;
}
