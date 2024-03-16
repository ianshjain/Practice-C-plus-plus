#include <iostream>
using namespace std;
int main() 
{
 char ch;
  cout<<"Enter the desired character : ";
  cin>>ch;
  if(ch>=65 && ch<=90)
    cout<<"Uppercase \n";
  else if (ch>=97 && ch<=122)
    cout<<"Lowercase \n";
  else
    cout<<"Not an alphabet \n";
  return 0;
}
