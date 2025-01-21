


//max of 3 number
#include <iostream>

using namespace std;
int maxx(int a,int b,int c)//10 20 30
{
    if(a>b)
     {
         if(a>c)
            return a;
         else return c;
     }
     else
            return b;
}
int main()
{

    cout<<maxx(188,555,200);
    return 0;
}

