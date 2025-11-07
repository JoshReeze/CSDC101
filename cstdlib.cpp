#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
    
    srand (time(0));
    cout << "The random number in the dice with SRAND is  " << (rand() % 6) + 1 << endl;
    

    return 0;
}
