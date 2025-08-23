#include <iostream>

using namespace std;

struct Car
{
    char company[100];
    int year;
};

int main()
{
    int n_cars;
    cout << "몇 대의 차를 목록으로 관리하시겠습니까? ";
    cin >> n_cars;

    Car *car = new Car[n_cars];
    for (int i = 0; i < n_cars; ++i)
    {
        cout << "자동차 #" << i + 1 << ":\n";

        cout << "제작업체: ";
        cin >> car[i].company;
        cout << "제작년도: ";
        cin >> car[i].year;
    }

    cout << "현재 귀하고 보유하고 있는 자동차 목록은 다음과 같습니다.\n";
    for (int i = 0; i < n_cars; ++i)
    {
        cout << car[i].year << "년형 " << car[i].company << endl;
    }

    return 0;
}
