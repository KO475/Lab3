#include <iostream>

using namespace std;
double x;
double y;

int main(){
    cout << "Enter a value for x: \n" << endl;
    cin >> x;
    cout << "Enter a value for y: \n" << endl;
    cin >> y;

    double*ptr_x = &x;
    double*ptr_y = &y;

    cout << "X: " << *ptr_x << endl;
    cout << "Y: " << *ptr_y << endl;
    cout << "X + Y: " << *ptr_x + *ptr_y << endl;
    return 0;
}