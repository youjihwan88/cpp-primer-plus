#include <iostream>
double CelsiusToFahrenheit(double);

using namespace std;

int main()
{
    double input;
    cout << "섭씨 온도를 입력하고 Enter 키를 누르십시오: ";
    cin >> input;

    cout << "섭씨 온도" << input << "도는 화씨로 " << CelsiusToFahrenheit(input) << "도입니다.";

    return 0;
}

double CelsiusToFahrenheit(double celsius)
{
    return 1.8 * celsius + 32.0;
}
