#include <iostream>

using namespace std;


int main()

{


   int day,hours,minutes,seconds;
   float sumOfSeconds=0.0;
   cout<<"Enter Day and Hours and Minutes and Second "<<endl;
   cin>>day>>hours>>minutes>>seconds;

   sumOfSeconds=seconds+(minutes*60)+(hours*3600)+(day*86400);
   cout<<sumOfSeconds<<" Seconds";


    return 0;
}


