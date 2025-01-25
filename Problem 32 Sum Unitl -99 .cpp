


//Sum unitl
#include <iostream>

using namespace std;

int main()
{
    int number=0,sum=0;

    while(number!=-99)
    {
        cout<<"Enter number : ";
        sum=sum+number;
        cin>>number;
    }
    cout<<"sum of number is : "<<sum<<endl;

    return 0;
}


