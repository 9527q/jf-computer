// 电子秤
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float apple_price = 5.8;
    float banana_price = 3.2;
    float apple_weight = 0;
    float banana_weight = 0;
    float total_amount = 0;

    cout << "请输入苹果的重量：";
    cin >> apple_weight;
    cout << "请输入香蕉的重量：";
    cin >> banana_weight;

    total_amount = total_amount + apple_price * apple_weight + banana_price * banana_weight;
    cout << fixed << setprecision(2) << "总金额：" << total_amount << endl;
    return 0;
}