

//validate age case 2
#include <iostream>

using namespace std;

int main()
{
    int age;
  cout<<"Enter your age pleas : ";
  cin>>age;
  while(age<18||age>48)
   {
    cout<<"Invalid Age "<<endl;
    cout<<"Enter your age pleas once again  : ";
    cin>>age;
   }
     cout<<"Valid Age";
    return 0;
}

