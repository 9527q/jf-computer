#include <iostream>

using namespace std;

int main()
{
    float f1 = 8888888888888.88;
    float f2 = f1 + 500;
    cout << "f1 = " << f1 << endl;
    cout << "f2 = " << f2 << endl;

    cout << "f1 == f2 " << (f1 == f2) << endl;
    return 0;
}