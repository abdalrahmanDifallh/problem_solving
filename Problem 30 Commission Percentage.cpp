

//Grade
#include <iostream>

using namespace std;

int main()
{
    int totalSalse,Percentage;
    cout<<"Enter total salse : ";
    cin>>totalSalse;
    if(totalSalse> 1000000)
        Percentage = totalSalse * 1 /100;
    else if(totalSalse>500000 && totalSalse<=1000000)
        Percentage = totalSalse * 2 /100;
    else if(totalSalse>100000 && totalSalse<=500000)
        Percentage = totalSalse * 3 / 100;
    else if(totalSalse>50000 && totalSalse<=100000)
        Percentage = totalSalse * 5 / 100;
    else
        Percentage = totalSalse * 0 /100;
    cout << "\n\nCommission Percentage from "<<totalSalse<<" is : "<<Percentage<<"$"<<endl;


    return 0;
}


