
//Triangle area
#include <iostream>

using namespace std;
float circleArea(int r)
{
    return 3.14*r*r;
}
int main()
{
    int r;
    cout<<"Enter the r"<<endl;
    cin>>r;
    cout<<"The area of circle is : "<<circleArea(r);

    return 0;
}

