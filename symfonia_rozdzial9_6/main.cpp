#include <iostream>
#include "main.c"

using namespace std;

extern "C" int rozruch(int, const char *); // this gives an error
// error: conflicting declaration of 'int rozruch(int, const char*)' with 'C' linkage

int main()
{
    cout << "Hello world!" << rozruch(1, "c") << endl;
    return 0;
}
