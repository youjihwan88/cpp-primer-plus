#include <iostream>
double LightYearToAstronomicalUnits(double);

using namespace std;

int main()
{
    double input;
    cout << "광년 수를 입력하고 Enter 키를 누르십시오: ";
    cin >> input;

    cout << input << "광년은 " << LightYearToAstronomicalUnits(input) << " 천문 단위입니다.";

    return 0;
}

double LightYearToAstronomicalUnits(double light_year)
{
    return 63240.0 * light_year;
}
