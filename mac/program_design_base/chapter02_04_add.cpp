// str add, complex add, complex times
#include <iostream>
#include <string>
#include <complex>

using namespace std;

int main()
{
    string str1 = "How are you?";
    string str2 = "I'm fine, and you?";
    cout << "str1 = " << str1 << endl;
    cout << "str2 = " << str2 << endl;
    cout << "str1 + str2 = " << str1 + str2 << endl;

    complex<int> c1(1, 2), c2(2, -3);
    cout << "c1 = " << c1 << endl;
    cout << "c2 = " << c2 << endl;
    cout << "c1 + c2 = " << c1 + c2 << endl;
    cout << "c1 * c2 = " << c1 * c2 << endl;

    return 0;
}