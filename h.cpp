#include<iostream>
using namespace std;
class date
{
    private:
    int dd,mm,yyyy;

    public:
    void input();
    void display();
};
void date::input()
{
    cout<<"enter the date ";
    cin>>dd;
    cout<<"enter the month in no. ";
    cin>>mm;
    cout<<"enter the year "
    cin>>yyyy;
}
void date::display()
{
    cout<<"today's date is dd/mm/yyyy"<<dd<<"/"<<mm"/"<<yyyy;
}
int main()
{
    date d;
    d.input();
    d.display();
}
return 0;
