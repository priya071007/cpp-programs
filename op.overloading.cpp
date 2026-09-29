#include<iostream>
using namespace std;

class Number
{
  int x;
public:
  Number(int a)
  {
    x=a;
  }
  Number operator+(Number n)
  {
    Number tem(0);
    tem.x=x+n.x;
    return tem;
  }
  void display()
  {
    cout<<"value="<<x;
  }
};
int main()
{
  Number n1(10);
  Number n2(20);
  
  Number n3=n1+n2;
  n3.display();
  return 0;
}
