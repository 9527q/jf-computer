#include <cmath>
#include <cstdio>
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    // 01 Hello World
    cout << "Hello World!" << endl;

    // 02 1 和 1.0
    // 计算1+1/(1+1/(1+1/5))
    // fixed 和 setprecision(...) 都是格式控制符，
    // 其中fixed表示采用定点格式输出浮点数（其他还有科学计数法等格式）
    // setprecision(4) 则表示输出浮点数时小数点后保留4位
    cout << fixed << setprecision(4) << 1+1/(1+1/(1+1./5)) << endl;
    // "%xxx"是占位符，表示这里要被替换；
    // "%f"表示输出一个浮点数(float)；
    // "%.4f"表示输出的浮点数时小数点后保留4位。
    printf("%.4f\n", 1+1/(1+1/(1+1./5)));

    // 03 三角函数
    // y = sin(π/4)^2 + sin(π/4)cos(π/4) - cos(π/4)^2
    cout << fixed << setprecision(5) 
        << pow(sin(M_PI / 4), 2) + sin(M_PI / 4) * cos(M_PI / 4) - pow(cos(M_PI / 4), 2)
        << endl;

    return 0;
}