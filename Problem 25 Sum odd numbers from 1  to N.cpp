


//print numbers from 1 to N
#include <iostream>

using namespace std;

int main()
{
    int n,sum=0;
  cout<<"Enter N : ";
  cin>>n;
  for(int i=0;i<=n;i++)
    {
        if(i%2!=0)
            sum+=i;
    }
    cout<<"Sum odd number is : "<<sum;
    return 0;
}

