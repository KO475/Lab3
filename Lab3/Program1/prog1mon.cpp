#include <iostream>
using namespace std;

int input1;
int q;
int d;
int n;
int p;

void money(int input1){
    input1 = 100 - input1;
   while(input1 > 0){
    if(input1 >= 25){
        q = input1 /25;
        input1 = input1%25;
        cout << "You have " << q << " quarters" << endl;
    }else if(input1 >= 10){
        d = input1/10;
        input1 = input1%10;
        cout << "You have " << d << " dimes" << endl;
    }else if(input1 >= 5){
        n = input1/5;
        input1 = input1%5;
        cout << "You have " << n << " nickels" << endl;
    }else if(input1 >= 1){
        p = input1/1;
        input1 = input1%1;
        cout << "You have " << p << " pennies" << endl;
    }
   }
    
}
