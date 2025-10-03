#include <iostream>
using namespace std;

int main() {
   
    int choice;
 
    cout << "What problem do you want to see? (1-5): ";
    cin >> choice;

    switch (choice) {
        case 1: {
            // Problem 1: Basic Pricing Decision

            cout << "*Basic pricing Decision Runs*" << endl;
            
            double money;
            
            cout << "Enter your money: ";
            cin >> money;
            
            if (money >= 1.0) {
                cout << "Enjoy your lemonade!" << endl;
            } 
            
            else {
                cout << "Sorry, you need more money." << endl;
            }
            break;
        }
        
        case 2: {
            // Problem 2: Weather-Based Discounts
            
            cout << "*Weather-Based Discount Runs*" << endl;
           
            double temperature;
            
            cout << "Enter today's temperature in Celsius: ";
            cin >> temperature;
           
            if (temperature >= 30) {
                cout << "It's hot! Lemonade costs $0.80 today." << endl;
            } 
            
            else {
                cout << "Lemonade costs $1.00 today." << endl;
            }
            break;
            
        }
        case 3: {
            // Problem 3: Inventory Check
            
            cout << "*Inventory Check Runs*" << endl;
            
            int lemons, sugar;
            
            cout << "Lemons: ";
            cin >> lemons;
            
            cout << "Sugar: ";
            cin >> sugar;
            
            if (lemons <= 0 || sugar <= 0) {
                cout << "You can't make lemonade!" << endl;
            } 
            
            else {
                cout << "You're ready to sell lemonade!" << endl;
            }
            break;
        }
        
        case 4: {
            // Problem 4: Bulk Purchase Discount
           
            cout << "*Bulk Purchase Discount Runs*" << endl;
           
            int cups;
            
            cout << "How many cups? ";
            cin >> cups;

            double price_per_cup = 1.0;
            double total = cups * price_per_cup;
            double discount = 0.0;

            if (cups >= 10) discount = 0.20;
            else if (cups >= 5) discount = 0.10;

            total = total * (1 - discount);

            int dollars = (int)total;
            int cents = (int)((total - dollars) * 100 + 0.5);

            cout << "Total cost: $" << dollars << ".";
            
            if (cents < 10) cout << "0";
            cout << cents << endl;

            break;
        }
        
        case 5: {
            // Problem 5: Player Movement
           
            cout << "*Player Movement Runs*" << endl;
            
            char button;
           
            int x = 0, y = 0;
          
            cout << "Press a button (W, A, S, D): ";
            cin >> button;

            if (button == 'W' || button == 'w') y += 1;
            else if (button == 'S' || button == 's') y -= 1;
            else if (button == 'A' || button == 'a') x -= 1;
            else if (button == 'D' || button == 'd') x += 1;
            else {
                cout << "Invalid input!" << endl;
               
                break;
            }

            cout << "The location of the player is ( " << x << ", " << y << ")" << endl;
           
            break;
        }
        
        default:
            cout << "Invalid choice! Please enter a number between 1 and 5." << endl;
    }

    return 0;
}
