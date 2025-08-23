#include <iostream>

using namespace std;

int main()
{
    double money_a = 100000;
    double money_b = 100000;

    int count = 0;
    while (true)
    {
        money_a += 10000;
        money_b *= 1.05;

        count++;

        if (money_b > money_a)
        {
            break;
        }
    }

    cout << count << "년이 지났습니다.\n";
    cout << "A씨의 투자 가치는: " << money_a << "입니다.\n";
    cout << "B씨의 투자 가치는: " << money_b << "입니다.\n";

    return 0;
}
