#include <iostream>

using namespace std;

int main()
{
    const int kYears = 3;
    const int kMonths = 12;
    const char *month_names[kMonths] = {
        "January",
        "February",
        "March",
        "April",
        "May",
        "June",
        "July",
        "August",
        "September",
        "October",
        "November",
        "December",
    };

    int month_sales[kYears][kMonths];
    for (int i = 0; i < kYears; i++)
    {
        cout << i + 1 << "번째 년도의 판매량을 입력합니다.\n";
        for (int j = 0; j < kMonths; ++j)
        {
            cout << month_names[j] << " 월의 판매량을 입력하세요. ";
            cin >> month_sales[i][j];
        }
    }

    int year_sales[3] = {0, 0, 0};
    for (int i = 0; i < kYears; i++)
    {
        for (int j = 0; j < kMonths; ++j)
        {
            year_sales[i] += month_sales[i][j];
        }
    }

    for (int i = 0; i < kYears; i++)
    {
        cout << i + 1 << "번째 년도의 판매량은 " << year_sales[i] << "입니다.\n";
    }

    return 0;
}
