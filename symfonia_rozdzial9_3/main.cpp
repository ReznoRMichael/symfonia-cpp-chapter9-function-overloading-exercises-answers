#include <iostream>

using namespace std;

typedef int cal;
enum akcja { stop, rusz, lewo, prawo };
enum dni { niedziela, poniedzialek, wtorek, sroda, czwartek, piatek, sobota };

void funk(int liczba) {}
void funk(akcja a) {}
void funk(dni a) {}
void funk(cal a) {} // this is another name of int, so it cannot be overloaded

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
