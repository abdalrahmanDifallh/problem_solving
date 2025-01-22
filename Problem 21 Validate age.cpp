
//validate age
#include <iostream>

using namespace std;

int main()
{
    int age;
  cout<<"Enter your age pleas : ";
  cin>>age;
  if(age>18 && age < 48)
    cout<<"Valid Age ";
    else cout<<"Invalid Age";
    return 0;
}

