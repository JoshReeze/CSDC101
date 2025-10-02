#include <iostream>
using namespace std;

int main()
{
    int score;
    
    cin >> score;
    
   if (score >= 90) {
        cout << "Grade: A";
    } 
   
    else if (score >= 80) {
        cout << "Grade: B";
    } 
    
    else if (score >= 70) {
        cout << "Grade: C";
    } 
   
    else {
        cout << "Grade: D";
    }

    return 0;
}
