#include <iostream>
void PrintTime(int, int);

using namespace std;

int main()
{
    int hour, min;
    cout << "시간 값을 입력하시오: ";
    cin >> hour;
    cout << "분 값을 입력하시오: ";
    cin >> min;

    PrintTime(hour, min);

    return 0;
}

void PrintTime(int hour, int min)
{
    cout << "시각: " << hour << ":" << min << endl;
    return;
}
