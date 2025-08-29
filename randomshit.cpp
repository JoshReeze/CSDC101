#include <iostream>// input and output library
using namespace std;// standard namespace for sin and cout

int main()
{
   int number_1, number_2, number_3, arsents_number;
   
   number_1 = 5;
   number_2 = 31;
   number_3 = 2002;
   
   arsents_number = 8 * (2 * (number_1 + number_3) / (5 - (number_2 * number_1)));
   
   cout << "Arsent's number is " << arsents_number << endl;
   
    return 0;
}
