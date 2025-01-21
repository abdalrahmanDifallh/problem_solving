//odd and even number
#include <iostream>

using namespace std;

void oddAndEven(int n)
{
    if(n%2==0)
    {
        cout<<"The number is even";
    }
    else
        cout<<"The number is odd";
}
int main()
{
    int number;
    cout<<"Enter the number pleas : ";
    cin>>number;
    oddAndEven(number);

    return 0;
}




