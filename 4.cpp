//program for accepted user
#include <iostream>

using namespace std;


int main()
{

    int age;
    bool driverLicense;
    cout<<"Hello ,pleas Enter your age : ";
    cin>>age;
    cout<<"Do you have Driver License ,1 for true and 0 for false : ";
    cin>>driverLicense;


    if(age > 21 && driverLicense == true)
        cout<<"Hired";
    else cout<<"Rejected";

    return 0;
}




