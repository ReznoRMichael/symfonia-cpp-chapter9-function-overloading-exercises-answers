#include <iostream>

using namespace std;

int a = 1;

void G(int m) { cout << "G( int m )"; };
void G(int *n) { cout << "G( int *n )"; };
void G(int &r) { cout << "G( int &r )"; };

int main()
{
    cout << "G( 1 )" <<  G(a) <<  endl;
    cout << "G( *1 )" <<  G(a) <<  endl;
    cout << "G( &1 )" <<  G(a) <<  endl;
    return 0;
}
