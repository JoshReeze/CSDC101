#include <iostream>// input and output library
using namespace std;// standard namespace for sin and cout

int main()
{
   float balance = 100, rate = 0.05, earned, total;
   
   earned = balance * rate;
   total = balance + earned;
   
   cout << "amount earned is "<< earned << endl;
   cout << "ending balance is "<< total << endl;
  
    return 0;
}
