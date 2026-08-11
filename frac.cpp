#include<iostream>
using namespace std;

class fraction
{
public:
int num,den;
void input()
{
cin>>num>>den;
}
void add(fraction f1,fraction f2)
{
    num=f1.num*f2.den+f2.num*f1.den;
    den=f1.den*f2.den;
}
void display()
{
    cout<<num<<"/"<<den;
}
};
int main(){
fraction f1,f2,f3;
cout<<"enter first fraction number=";
f1.input();

cout<<"enter second fraction number=";
f2.input();

f3.add(f1,f2);

cout<<"addition=";
f3.display();

return 0;

}

