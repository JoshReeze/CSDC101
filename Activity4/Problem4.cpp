#include <iostream>
using namespace std;

int main() {
   
    int cups;
   
    cout << "How many cups? ";
    cin >> cups;

    double price_per_cup = 1.0;
    double total = cups * price_per_cup;
    double discount = 0.0;

    if (cups >= 10) {
        discount = 0.20;  
    } 
    
    else if (cups >= 5) {
        discount = 0.10;  
    }

    total = total * (1 - discount);

    
    int dollars = (int)total;
    int cents = (int)((total - dollars) * 100 + 0.5);  
    
    cout << "Total cost: $" << dollars << ".";
    
    if (cents < 10) cout << "0";  
    cout << cents << endl;

    return 0;
}
