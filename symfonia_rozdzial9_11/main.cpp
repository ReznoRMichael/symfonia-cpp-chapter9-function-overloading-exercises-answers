#include <iostream>

using namespace std;

int a = 3;

void rysuj(int m) { cout << "rysuj(int m)"; };
void rysuj(int *m) { cout << "rysuj(int *m)"; };
void rysuj(const int n) { cout << "rysuj(const int n)"; };
void rysuj(const int *n) { cout << "rysuj(const int *n)"; };
void rysuj(volatile int k) { cout << "rysuj(volatile int k)"; };
void rysuj(volatile int *k) { cout << "rysuj(volatile int *k)"; };

int main()
{
    rysuj(a);

    return 0;
}
