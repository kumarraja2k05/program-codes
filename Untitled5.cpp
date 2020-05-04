#include<iostream>
using namespace std;
class  publication
{
public:
    char pub[20];
    void get()
    {
        cout<<"enter the publication name="<<endl;
        cin>>pub;
    }
};
class book: public publication
{
public:
    char aut[20];
    char title[20];
    int cost;
    void get()
    {
        cout<<"enter the title of the publication="<<endl;
        cin>>title;
        cout<<"enter the author name="<<endl;
        cin>>aut;
        cout<<"enter the cost of the object"<<endl;
        cin>>cost;
    }
};
class sale
{
    public:
    int sold;
    void get()
    {
        cout<<"how many copies has been sold="<<endl;
        cin>>sold;

    }
};
class author: public book,public sale
{
public:
    void d()
    {
        cout<<"the publication name is="<<pub<<endl<<"title of the book is:  "<<title<<endl<<"books author is:-"<<aut<<endl<<"total no. of books sold  are="<<sold<<endl<<"the cost of the book is"<<cost;
    };
};
int main()
{
    author obj;
    obj.publication::get();
    obj.book::get();
    obj.sale::get();
    obj.d();
}
