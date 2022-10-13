#include <iostream>

using namespace std;

int main()
{
    int n;
    float f;
    // double d = 1.23;
    double d = 0.00;
    char c = '*';

    // & 取变量内存地址的操作符
    cout << "address of n: " << &n << endl;
    cout << "address of f: " << &f << endl;
    cout << "address of d: " << &d << endl;
    // & 作用在 char 上面时，不会输出地址，而是输出字符串的内容，知道字节数据为 0 为止
    // 因此上面的 double d 取值不同的时候，下面的 cout &c 的结果也会不同
    // 在不同计算机上面，double d 有值时，&c 的值可能不同
    cout << "address of c: " << &c << endl;

    // 1. 地址是从高地址到低地址使用的
    // 2. 每个变量的内存地址，一定得是其单个数据所占字节数的整数倍

    return 0;
}