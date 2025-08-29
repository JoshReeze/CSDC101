#include <iostream>// input and output library
using namespace std;// standard namespace for sin and cout

int main()
{
   int number_one, number_two, number_three, number_four, sum;
   
   cout << "Enter the first number: ";
   cin >> number_one;
   cout << "Enter the second number: ";
   cin >> number_two;
   cout << "Enter the third number: ";
   cin >> number_three;
   cout << "Enter the fourth number: ";
   cin >> number_four;
   
   cout << number_one + number_two + number_three + number_four << " is the sum\n";
   
    return 0;
}
