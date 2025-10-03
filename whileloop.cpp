#include <iostream>
using namespace std;

int main()
{
   int main = 1;
   char answer;
   
   do{
       cout<< "Do you want to build a snowman? press y for yes and n for no "<< endl;
       cin>> answer;
       cout<< "Sing let it go"<< endl;
   }
    while(answer != 'y');
        cout<< "Ok byeee"<< endl; 
    return 0;
}
