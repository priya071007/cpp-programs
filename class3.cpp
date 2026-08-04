#include<iostream>
using namespace std;

class greatest
{
public:
    int a,b;
    
    
    void input()
    {
        cin>> a>>b;
    }
    
    void display()
    {
        if(a>b)
            cout<<a;
        else
            cout<<b;
            
    }
};

int main()
{
    greatest g;
    g.input();
    g.display();
    return 0;
    
    
    
}
