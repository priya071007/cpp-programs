#include<iostream>
using namespace std;

class interest
{
public:
    float p,r,t;
    
    void input()
    {
        cin>>p>>r>>t;
    }
    
    void calculate()
    {
        cout<<(p*r*t)/100;
    }
};

int main()
{
    interest i;
    i.input();
    i.calculate();
    return 0;
}
