

//Piggy Bank
#include <iostream>

using namespace std;

int main()
{
    int Penny,Nickel,Dime,Quarter,Dollar,a,b;
    cout<<"Enter Penny : ";
    cin>>Penny;
    cout<<"Enter Nickel : ";
    cin>>Nickel;
    cout<<"Enter Dime : ";
    cin>>Dime;
    cout<<"Enter Quarter : ";
    cin>>Quarter;
    cout<<"Enter Dollar : ";
    cin>>Dollar;

    Nickel =  5*Penny;
    Dime = 10 *Penny;
    Quarter = 25 * Penny;
    Dollar = 100 * Penny;

   float  totalPenneis = Penny+Nickel+Dime+Quarter+Dollar;
    cout<<totalPenneis<<"Pennies"<<endl;
    cout<<totalPenneis/100 <<" Dollars"<<endl;


    return 0;
}


