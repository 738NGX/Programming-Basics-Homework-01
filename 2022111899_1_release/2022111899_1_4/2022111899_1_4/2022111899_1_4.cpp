#include <iostream>
using namespace std;

int main()
{
    int num,a,b,c,d;
    cout << "请输入一个四位整数：" << endl;
    cin >> num;
    a = num / 1000;
    b = (num - 1000 * a) / 100;
    c = (num - 1000 * a - 100 * b) / 10;
    d = num % 10;
    cout << num << "的千位数字是" << a << "，百位数字是" << b << "，十位数字是" << c << "，个位数字是" << d << endl;
    return 0;
}
