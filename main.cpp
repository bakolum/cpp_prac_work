#include <iostream>

using namespace std;

int main(){
    // вычисление первых пяти чисел фибоначи:
    double f1 = 0.0;
    double f2 = 1.0;
    double f3 = f1 + f2;
    double f4 = f2 + f3;
    double f5 = f3 + f4;

    // вывод первых пяти чисел фибоначи в консоль:
    cout << "Fibonacci number 1 = " << f1 << endl;
    cout << "Fibonacci number 2 = " << f2 << endl;
    cout << "Fibonacci number 3 = " << f3 << endl;
    cout << "Fibonacci number 4 = " << f4 << endl;
    cout << "Fibonacci number 5 = " << f5 << endl;
}