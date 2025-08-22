#include <iostream>// input and output library
using namespace std;// standard namespace for sin and cout

int main()
{
  int average, num1 = 169, num2 = 286;
  
  average = (num1 + num2)/2;
  
  if (num1 > average){
      cout << "You did better than average";
  }
  
  else{
      cout << "You did worse than average";
  }
  
    return 0;
}
