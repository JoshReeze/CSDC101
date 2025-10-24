#include <iostream>
#include <string>
using namespace std;


int main()
{
    int cars [5] = {1, 44, 4, 55, 16};
    
    cout << "The first car list is " << cars [0] << endl;
    cout << "The second car list is " << cars [1] << endl;
    cout << "The third car list is " << cars [2] << endl;
    cout << "The fourth car list is " << cars [3] << endl;
    cout << "The fift car list is " << cars [4] << endl;

    string clothes [5] = {"Uniqlo", "Penshoppe", "RRJ", "ForMe", "Crome Hearts"};
    
    cout << "The first brand is " << clothes[0] << endl;
    clothes[0] = "Tactics";
    cout << "The first brand is " << clothes[0] << endl;
    
    
    return 0;
}
