#include <iostream>
using namespace std;
int main() 
{
 int x,y,z,a,b;
  cout<<"Enter first number : ";
  cin>>x;
    cout<<"\n Enter Second number : ";
  cin>>y;
    cout<<"\n Enter Third number : ";
  cin>>z;
  a=x>y?x:y;
  b=a>z?a:z;
  cout<<"\n The greatest number among three is : "<<b;
  return 0;
}
