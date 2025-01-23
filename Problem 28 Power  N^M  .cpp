

//Power of 2.3.4
#include <iostream>

using namespace std;

int main()
{
    int n,m,sum=1;
    cout<<"Enter number (n) ";
    cin>>n;
    cout<<"Enter power  (m) ";
    cin>>m;

    for(int i=0;i<m;i++)
    sum=sum*n;
    cout<<"Power "<<n<<"^"<<m<<" is : "<<sum<<endl;



    return 0;
}

