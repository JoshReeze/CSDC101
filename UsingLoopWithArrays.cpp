#include <iostream>
#include <string>
using namespace std;


int main()
{
    string twice[4] = {"Tzuyu", "Sana", "Momo", "Jhiyo"};
    
    for (int i = 0; i < 4; i++){
        cout << "the no. " << i + 1 << " member of twice is " << twice [i] << endl;
    }
        
    return 0;
}
