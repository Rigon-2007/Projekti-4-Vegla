#include <iostream>
using namespace std;

double sum_func( int num1, int num2){
    return num1 + num2;
}

int main() {
    int a = 10;
    int b = 1;

    double s = sum_func(a, b);
    cout << "Shuma : " <<  s << endl;
    return 0;

}

