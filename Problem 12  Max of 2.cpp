

//max of 2 number
#include <iostream>

using namespace std;
int maxx(int n1,int n2)
{
    if(n1>n2)
        return n1;
    else return n2;
}
int main()
{

    cout<<maxx(80,81);
    return 0;
}

