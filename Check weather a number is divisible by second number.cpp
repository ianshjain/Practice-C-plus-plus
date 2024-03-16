#include <iostream>
using namespace std;
int main()
{
  int a,b;
  cout<<"Enter the first number to check : ";
  cin>>a;
  cout<<"Enter the second number : ";
  cin>>b;
  if (a%b==0)
    cout<<"\n The first number is divisible by second";
  else
    cout<<"\n The first number is not divisible by second";
  return 0;
}
