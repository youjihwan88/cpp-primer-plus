#include <iostream>

using namespace std;

int main()
{
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

    int month_sales[kMonths];
    for (int i = 0; i < kMonths; ++i)
    {
        cout << month_names[i] << " 월의 판매량을 입력하세요. ";
        cin >> month_sales[i];
    }

    int year_sales = 0;
    for (int i = 0; i < kMonths; i++)
    {
        year_sales += month_sales[i];
    }

    cout << "연간 총 판매량은 " << year_sales << "입니다.\n";

    return 0;
}
