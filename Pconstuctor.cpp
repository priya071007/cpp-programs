#include<stdio.h>
using namespace std;

class employee:
{
    int employee_id;
    string name;
    float salary;

public:
    employee()
    {
        employee_id=0;
        name="unknown";
        salary=0;
    
    }

    employee(int id,string n,float s)
    {
        employee_id=id;
        name= n;
        salary=s;
    
    }
    employee(employee &e)
    {
        employee_id=e.employeeID;
        name=e.name;
        salary=e.salary;
    

    }
    void display()
    {
        cout<<"employee id:"<<employee_id<<endl;
        cout<<"name:"<<name<<endl;
        cout<<"salary:"<<salary<<endl;
    }
};
int main()
{
    employee e1;
    cout<<"default constructor:"<<endl;
    e1.display();
    
    employee e2(42,"priya",76857990000);
    cout<<"\ncopy constructor:"<<endl;
    e3.display();
    return 0;
}

