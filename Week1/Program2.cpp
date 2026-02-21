#include<iostream>
using namespace std;
int main()
{
  int a,b;
  cout<<"Enter a&b value";
  cin>>a>>b;
  cout<<"Value of a is:"<<a<<endl<<"Value of b is:"<<b;
  a = a+b;
  b = a-b;
  a = a-b;
  cout<<"Value of a is:"<<a<<endl<<"Value of b is:"<<b;
}
