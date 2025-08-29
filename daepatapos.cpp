#include <iostream>// input and output library
using namespace std;// standard namespace for sin and cout

int main()
{
   int number, remainder;
   
   cout << "Enter a number: ";
   cin >> number;
   
   remainder = number % 2;
   
   if (remainder == 1)
   {
       cout << "the user input is an odd number\n";
   }
   else if (remainder == 0)
   {
       cout << "the user input is an even number\n";
   }
   else 
   {
       cout << "pick a number not a letter or something\n";
   }
   
    return 0;
}
