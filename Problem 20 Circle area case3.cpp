
//Circle area case3
#include <iostream>

using namespace std;

float circleAreaCase2(int a,int b)
{
    float pi=3.14;
    float x = (pi*b*b/4)*( (2*a-b) / (2*a+b));
    return x;
}
int main()
{
    float a,b;
    cout<<"Enter the A and B : "<<endl;
    cin>>a>>b;
    cout<<"The area of Circle is : "<<circleAreaCase2(a,b);

    return 0;
}

