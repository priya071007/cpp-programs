#include<iostream>
using namespace std;

class employee
{
public:

    int empid;
    string name;
    float salary;
    
    void input()
    {
        cout<< empid<<endl;
        cout<< name<<endl;
        cout<< salary;
        }
        
};

int main()
{
    employee e;
    e.input();
    e.display();
    return 0;
}
