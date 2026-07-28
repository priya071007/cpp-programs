#include<iostream>
using namespace std;
int main(){
int n,temp,sum=0,rem;
cin>>n;
temp=n;
while(n>0)
{
rem=n%10;
sum=sum+(rem*rem*rem);
n=n/10;
}
if(sum==temp)
cout<<"amstrong number";
else
cout<<"not amstrong number";
}
