#include <iostream>
using namespace std;

int main(){

    typedef int *VEC;
    typedef VEC *MATRIX;

    int a = 5;
    VEC v = &a;
    MATRIX m = &v;

    cout << *v << endl;
    cout << **m << endl;

}