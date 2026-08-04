#include<iostream>
using namespace std;

class calculator
{
public:
    int a,b;

    void input()
    {

        cin>>a>>b;
    }

    void calculate()
    {
        cout<<"add="<<a+b<<endl<<"sub"<<a-b<<endl<<"mul="<<a*b<<endl<<"div="<<a/b<<endl<<"mod="<<a%b;
    }
};

int main()
{

    calculator c;
    c.input();
    c.calculate();
    return 0;
}
