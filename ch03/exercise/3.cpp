#include <iostream>

using namespace std;

int main()
{
    int degree, minute, second;
    cout << "위도를 도, 분, 초  단위로 입력하시오:" << endl;

    cout << "먼저, 도각을 입력하시오: ";
    cin >> degree;

    cout << "다음에, 분각을 입력하시오: ";
    cin >> minute;

    cout << "끝으로, 초각을 입력하시오: ";
    cin >> second;

    cout << degree << "도, " << minute << "분, " << second << "초 = "
         << degree + (minute / 60.0) + (second / (60.0 * 60.0)) << "도" << endl;

    return 0;
}
