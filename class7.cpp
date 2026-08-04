#include<iostream>
using namespace std;

class result
{
public:
    int s1,s2,s3,s4,s5,total;
    float per;
    
    void input()
    {
        cin>>s1>>s2>>s3>>s4>>s5;
    }
    
    void display()
    {
        total=s1+s2+s3+s4+s5;
        per=(total/5)*100;
        cout<<"total="<<total<<endl;
        
        if(per>=35)
            cout<<"pass";
        else
            cout<<"fail";
        }
};

int main()
{
    result r;
    r.input();
    r.display();
    return 0;
}
