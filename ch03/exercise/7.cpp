#include <iostream>

using namespace std;

int main()
{
    double input;
    cout << "휘발유 소비량을 유럽 스타일(liters/100km)로 입력하세요: ";
    cin >> input;


    double output = 1.0 / input * 62.14 * 3.875;
    cout << "미국 스타일(miles/gallon)로 변환된 값은 " << output << "[mpg]입니다" << endl;

    return 0;
}
