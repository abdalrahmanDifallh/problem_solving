



//is prime number
#include <iostream>

using namespace std;

string isPrime(int number)
{

    for(int i=2;i<number;i++)
    {
        if(number%i==0)
        {

         cout<<i<<endl;
        return "not prime";}

    }
    return "prime";
}

int main()
{
    int number;
    cout<<"Enter the number : ";
   cin>>number;
    cout<<isPrime(number);


    return 0;
}


