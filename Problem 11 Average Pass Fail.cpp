
//Average Pass Fail
#include <iostream>

using namespace std;

int main()
{
   int n1,n2,n3,average;
   cout<<"Enter the numbers "<<endl;
   cin>>n1>>n2>>n3;
   average=(n1+n2+n3)/3;
   cout<<"Average of three numbers is "<<average<<endl;
   if(average>=50)
    cout<<"Pass";
   else cout<<"Fail";


    return 0;
}

