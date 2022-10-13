#include <iostream>

using namespace std;

int main()
{
    int n;
    float f;
    double d1 = 1.23;
    char c1 = '*';
    double d2 = 0.00;
    char c2 = '#';

    cout << "n = " << n << endl;
    cout << "f = " << f << endl;
    cout << "d1 = " << d1 << endl;
    cout << "c1 = " << c1 << endl;
    cout << "d2 = " << d2 << endl;
    cout << "c2 = " << c2 << endl;

    // & 取变量内存地址的操作符
    cout << "address of n: " << &n << endl;
    cout << "address of f: " << &f << endl;
    cout << "address of d1: " << &d1 << endl;
    // & 作用在 char 上面时，不会输出地址，而是输出字符串的内容，知道字节数据为 0 为止
    // 因此上面的 double d 取值不同的时候，下面的 cout &c 的结果也会不同
    // 在不同计算机上面，double d 有值时，&c 的值可能不同
    cout << "address of c1: " << &c1 << endl;
    cout << "address of d2: " << &d2 << endl;
    cout << "address of c2: " << &c2 << endl;

    // 1. 地址是从高地址到低地址使用的
    // 2. 每个变量的内存地址，一定得是其单个数据所占字节数的整数倍

    // 指针变量
    int* pn = &n;
    float* pf = &f;
    double* pd1 = &d1;
    char* pc1 = &c1;
    double* pd2 = &d2;
    char* pc2 = &c2;

    cout << "pn = " << pn << endl;
    cout << "pf = " << pf << endl;
    cout << "pd1 = " << pd1 << endl;
    cout << "pc1 = " << pc1 << endl;
    cout << "pd2 = " << pd2 << endl;
    cout << "pc2 = " << pc2 << endl;

    cout << "&pn = " << &pn << endl;
    cout << "&pf = " << &pf << endl;
    cout << "&pd1 = " << &pd1 << endl;
    cout << "&pc1 = " << &pc1 << endl;
    cout << "&pd2 = " << &pd2 << endl;
    cout << "&pc2 = " << &pc2 << endl;

    return 0;
}