#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    // 整数相除得整数
    cout << "7 / 2 = " << 7 / 2 << endl;
    cout << "7 / 2. = " << 7 / 2. << endl << endl;

    float pi = 3.1415926;
    cout << "pi = " << pi << endl;

    cout << "pi / 6 = " << pi / 6 << endl;
    cout << "sin(pi / 6) = " << sin(pi / 6) << endl;
    cout << "arcsin: asin(0.5) = " << asin(0.5) << endl << endl;

    // pi 放前面保证 * 4 之后是小数
    float pi4_3 = pi * 4 / 3;
    cout << "pi4_3 = pi * 4 / 3 = " << pi4_3 << endl;
    cout << "tan(pi4_3) = " << tan(pi4_3) << endl;

    cout << "log(2.71828) = " << log(2.71828) << endl;
    cout << "log10(10) = " << log10(10) << endl;
    cout << "log2(4) = " << log2(4) << endl << endl;

    cout << "整数绝对值: abs(-1) = " << abs(-1) << endl;
    cout << "小数绝对值: fabs(-2.5) = " << fabs(-2.5) << endl;
    cout << "abs 取小数绝对值: abs(-2.5) = " << abs(-2.5) << endl;
    cout << "fabs 取整数绝对值: fabs(-3) = " << fabs(-3) << endl << endl;

    cout << "sqrt(10) = " << sqrt(10) << endl;
    cout << "floor(5.5) = " << floor(5.5) << endl;
    cout << "floor(-5.5) = " << floor(-5.5) << endl << endl;

    cout << "exp(1) = " << exp(1) << endl;
    cout << "pow(1, 0) = " << pow(1, 0) << endl;
    cout << "pow(3, 2) = " << pow(3, 2) << endl;
    cout << "pow(4, 0.5) = " << pow(4, 0.5) << endl;

    return 0;
}
