

//max of 2 number
#include <iostream>
#include<cmath>

using namespace std;
float rectangleArea(int a,int b)
{
   return (a*sqrt(b*b-a*a));
}
int main()
{

    int a,b;
    cout<<"Enter the diagonal and side area :"<<endl;
    cin>>a>>b;
    cout<<"The area is : "<<rectangleArea(a,b);
    return 0;
}


