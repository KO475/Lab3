#include <iostream>

using namespace std;
extern int input1; 
extern int q; 
extern int d; 
extern int n;
extern int p;
extern void money(int input1);

int main(){
   int input1;
   cout << "Enter an integer\n";
   cin >> input1;
   if(input1 > 100){
    cout << "Sorry too big ;-;";
   }else if(input1 <= 100){
    money(input1);
   }
    return 0;
}