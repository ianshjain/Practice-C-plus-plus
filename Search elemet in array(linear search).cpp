#include <iostream>
using namespace std;
int main() {
  int n,ch;
  cout<<"enter number element:- ";
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++)
    {
      cin>>a[i];
    }
  for(int i=0;i<n;i++)
    {
      cout<<" "<<a[i];
    }
  cout<<"\n enter an element to find:- ";
  cin>>ch;

  for(int i=0;i<n;i++)
    if (a[i]==ch)
    {
      cout<<"index:- "<<i;
    }
  return 0;
}
