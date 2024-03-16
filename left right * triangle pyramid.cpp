#include <iostream>
using namespace std;
int main() 
{
  int n,i,j,k;
  cout<<"Enter number of rows : ";
  cin>>n;
  for(i=1;i<=n;i++)
    {
      cout<<"\n";
      for(k=1;k<n;k++)
        cout<<" ";
      for(j=1;j<=i;j++)
        cout<<" * "<<" ";
    }
  return 0;
}
