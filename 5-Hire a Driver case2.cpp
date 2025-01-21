//Hire a Driver case 2
#include <iostream>

using namespace std;

int main()
{

    int age;
    bool driverLicense;
    bool Recommendation;
    cout<<"Hello ,pleas Enter your age : ";
    cin>>age;

    cout<<"Do you have Driver License ?  ,1 for Yes ,and 0 for No: ";
    cin>>driverLicense;

    cout<<"Do you have Recommendation ? , 1 for Yes ,and 0 for No: ";
    cin>>Recommendation;

    if(Recommendation==true)
        cout<<"Hired";
    else if(driverLicense == true && age > 21)
        cout<<"Hired";
    else cout<<"Rejected";

    return 0;
}




