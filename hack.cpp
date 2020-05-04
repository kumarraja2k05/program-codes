 #include <iostream>
#include <sstream>
using namespace std;

class Student
{
    private:
    int age;
    char first_name[100];
    char last_name[100];
    int standard;
    public:
    void getdata()
    {
    	cin>>age>>first_name>>last_name>>standard;
	}
	void dis1()
	{
		cout<<age<<endl<<last_name<<", "<<first_name<<endl<<standard<<endl<<endl;
	}
	void dis2()
	{
		cout<<age<<","<<first_name<<","<<last_name<<","<<standard;
	}
};

int main() 
{
	Student obj1;
	obj1.getdata();
	obj1.dis1();
	obj1.dis2();
    return 0;
}
