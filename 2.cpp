//print name that user enter
#include <iostream>

using namespace std;

void printName(string name)
{
    cout<<"my  name is : "<<name;
}
int main()
{
    string name;
    cout<<"Enter your name please : ";
    cin>>name;
    printName(name);
    return 0;
}



