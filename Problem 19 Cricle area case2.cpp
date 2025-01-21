
//Circle area case2
#include <iostream>

using namespace std;
float circleAreaCase2(int a)
{
    return (3.14*a*a)/4;
}
int main()
{
    int a;
    cout<<"Enter the A"<<endl;
    cin>>a;
    cout<<"The area of Circle is : "<<circleAreaCase2(a);

    return 0;
}

