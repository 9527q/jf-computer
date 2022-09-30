#include <cmath>
#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    while (1)
    {
        unsigned int guess_range; // 猜数范围
        unsigned int bit_cnt;  // 二进制位数

        cout << "输入要猜数的范围（正整数）并想好一个数：";
        cin >> guess_range;

        bit_cnt = int(log2(guess_range)) + 1;

        // 存储要展示出来以供选择的数，并赋初值 0
        int numbers_array[bit_cnt][guess_range];
        memset(numbers_array, 0, bit_cnt * guess_range * sizeof(int));

        // 填充要展示的数
        for (int bit_i=0; bit_i < bit_cnt; bit_i++)
        {
            int index = 0;
            for (int num=0; num <= guess_range; num++)
            {
                // 只要该bit位为1，就放进该数组中去
                if (num & int(pow(2, bit_i)))
                {
                    numbers_array[bit_i][index] = num;
                    index++;
                }
            }
        }

        // 开始猜数字
        int number = 0;

        // 查看要展示的数
        for (int bit_i=0; bit_i < bit_cnt; bit_i++)
        {
            cout << bit_i << "组" << endl;
            for (int j=0; j < guess_range; j++)
            {
                if (not numbers_array[bit_i][j])
                {
                    break;
                }

                if (j and (j % 10 == 0))
                {
                    cout << endl;
                }

                cout << numbers_array[bit_i][j] << "  ";
            }
            cout << endl;

            char guess_in;
            cout << "这一组里有你想好的数字吗？(Y/N)";
            cin >> guess_in;
            if (guess_in == 'Y')
            {
                number += int(pow(2, bit_i));
            }

            cout << endl;
        }

        cout << "你心里想的数是" << number << endl << endl << endl;
    }

    return 0;
}