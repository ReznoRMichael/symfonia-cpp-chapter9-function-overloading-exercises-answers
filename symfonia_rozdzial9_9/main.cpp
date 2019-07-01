#include <iostream>

using namespace std;

void F( char tab[] ) { return ; } // conflict
double F( int t[] ) { return 1; }
char F( char * wsk ) { return 1; } // conflicts with void F( char tab[] )
char F( char tablica[4][5] ) { return 1; } // conflict
char F( char (* tablica) [5] ) { return 1; } // conflicts with char F( char tablica[4][5] )
char F( char tablica[6][5] ) { return 1; } // conflicts with char F( char tablica[4][5] )
char F( char tablica[1][4][5] ) { return 1; }

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
