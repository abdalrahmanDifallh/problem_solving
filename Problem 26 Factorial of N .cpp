


//Factorial of N
#include <iostream>

using namespace std;

int main()
{
    int n,sum=1;
  cout<<"Enter N : ";
  cin>>n;
  for(int i=n;i>=1;i--)
  {
  sum = sum * i ;
  cout<<i<<endl;
  }
    cout<<"Factorial is : "<<sum;
    return 0;
}

