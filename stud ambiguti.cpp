#include<iostream>
using namespace std;
class student
{
public:
    char name[20];
    char uid[20];
    void getdata()
    {
        cout<<"enter name and uid="<<endl;
        cin>>name>>uid;
    }
};
class internal:virtual public student
{
   public:
        char s1[20],s2[20];
    int m1,m2;
    void getdata()
    {
        cout<<"enter the subject one with marks ="<<endl;
        cin>>s1>>m1;
        cout<<"enter the subject two with marks ="<<endl;
        cin>>s2>>m2;
    }
};
class external:virtual public student
{
public:
    int m3,m4;
    void getdata()
    {
        cout<<"external marks of previous subject=";
        cin>>m3>>m4;

    }
};
class result:public internal,public external
{
public:    void d()
    {
        cout<<endl<<"student name="<<name<<"     "<<"uid="<<uid<<endl<<"internal marks of subject="<<"subject one="<<s1<<"  =  "<<m1<<endl<<"subject two="<<s2<<"  =  "<<m2<<endl<<"external marks="<<m3<<"   "<<m4;
        cout<<endl<<"total marks="<<"subject one="<<m1+m3<<endl<<"subject two="<<m2+m4<<endl;
    }
};
int main()
{
    result obj;
    obj.student::getdata();
    obj.internal::getdata();
    obj.external::getdata();
    obj.d();
}
