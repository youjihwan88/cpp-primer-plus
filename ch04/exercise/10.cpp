#include <iostream>
#include <array>

using namespace std;

int main()
{
    array<float, 3> arr;

    cout << "첫번째 달리기 기록을 입력하세요: ";
    cin >> arr[0];
    cout << "두번째 달리기 기록을 입력하세요: ";
    cin >> arr[1];
    cout << "세번째 달리기 기록을 입력하세요: ";
    cin >> arr[2];

    cout << "평균 달리기 기록은 " << (arr[0] + arr[1] + arr[2]) / 3 << "입니다.\n";

    return 0;
}
