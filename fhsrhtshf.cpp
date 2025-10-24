#include <iostream>
#include <string>
using namespace std;


int main()
{
    int grade[4] = {90, 95, 100, 85};
    int max = grade[0];
    
    for (int i = 0; i < 4; i++){
        if(grade [i] > max)
        max = grade [i];
    }
    
    cout << max;
        
    return 0;
}
