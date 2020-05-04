 #include<iostream>
 using namespace std;
       int main()
       {
            int a=1;

              try
              {

                  if(a==1)
                      throw a;                  //throwing integer exception

                  else if(a==2)
                      throw 'A';                //throwing character exception

                  else if(a==3)
                      throw 4.5;                //throwing float exception

              }
              catch(...)
              {
                  cout<<"\nException occur.";
              }

              cout<<"\nEnd of program.";

       }
