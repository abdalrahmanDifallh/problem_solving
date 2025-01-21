


//Triangle area
#include <iostream>

using namespace std;
int triangleArea(int a,int h)
{
    return 0.5 * a * h;
}
int main()
{
    int a,h;
    cout<<"Enter the a and h"<<endl;
    cin>>a>>h;
    cout<<"The area of triangle is : "<<triangleArea(a,h);

    return 0;
}

