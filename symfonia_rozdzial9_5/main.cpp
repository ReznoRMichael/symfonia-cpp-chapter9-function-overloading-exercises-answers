#include <iostream>

using namespace std;

int deutz(int a) { return 1; } // this function will cause problems (only when it will be called)
double deutz(double d) { return 1.0; }
double deutz(char znak, int k = 6) { return 1.0; }
double deutz(int k, char znak = 'x') { return 1.0; }
int main()
{
    cout << "int deutz(1): " << deutz(1) << endl;
    cout << "double deutz(1.0): " << deutz(1.0) << endl;
    cout << "double deutz('1'): " << deutz('1') << endl;
    cout << "double deutz(1, '1'): " << deutz(1, '1') << endl;
    return 0;
}
