#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter number of rows: ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cout<<"\n";
        for(int k=i;k<n;k++)
        cout<<" ";
        for(int j=1;j<=i;j++)
        cout<<"*"<<" ";
    }
    return 0;
}
