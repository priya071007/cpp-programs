#include<iostream>
using namespace std;
class circle

{
public:
    float r;
    
    void input()
    {
        cin>> r;
    }
    
    void area ()
    {
        cout<<"area="<<3.14*r*r<<endl;
        cout<<"circumference="<<2*3.14*r;
    }
};

int main()
{
    circle c;
    c.input();
    c.area();
    return 0;
}
