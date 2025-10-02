#include <iostream>
using namespace std;

int main()
{
   char choice = 'A';

    
    switch (choice){
    case 'A':
        cout << "A is for apple";
    break;
    
    case 'B':
        cout << "B is for banana";
    break;
    
    case 'C':
        cout << "C is for cantalope";
    break;
    
    default:
        cout << "Fruit Salad";
    break;
    
    }
   
    return 0;
}
