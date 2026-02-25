#include<iostream>
using namespace std;
int main()
{
  int a,b;
  char op; //operator
cout<<"enter a and b values:";
cin>>a>>b;
cout<<"enter operator:";
cin>>op;
switch(op)
{
case '+':cout<<"addition:"<<a+b;
          break;
case '-':cout<<"addition:"<<a+b;
          break;
case '*':cout<<"addition:"<<a+b;
          break;
case '/':cout<<"addition:"<<a+b;
          break;
default :cout<<"invalid operator";
          break;
}
}
