

//Swap number
#include <iostream>

using namespace std;

void swapp(int n1,int n2){
int temp = n1;
n1=n2;
n2=temp;

cout<<"number one is : "<<n1<<" and number two is : "<<n2;

}

int main()
{

int n1,n2;
    cout<<"Enter Number one : ";
    cin>>n1;
    cout<<"Enter Number Two : ";
    cin>>n2;
    swapp(n1,n2);
    return 0;
}


