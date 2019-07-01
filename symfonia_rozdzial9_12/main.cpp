#include <iostream>

using namespace std;

char* (*fun( double* (*wskf1) (char*), double (*wskf2) (int, double) )) (char*) {  };

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
