#include<iostream>
using namespace std;
class score
{
public:
    int val;
    score()
    {
        val=2;
    }
    friend void operator--(score);
};
void operator--(score s)
{
    s.val=s.val-1;
    cout<<s.val;
}
int main()
{
    score s1;
    --s1;
}
