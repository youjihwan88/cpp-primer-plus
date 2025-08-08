#include <iostream>

using namespace std;

int main()
{
    const int kHoursInDay = 24;
    const int kMinutesInHour = 60;
    const int kSecondsinMinute = 60;

    long seconds;
    cout << "초 수를 입력하시오: ";
    cin >> seconds;

    long day, hour, min, sec;
    day = seconds / (kHoursInDay * kMinutesInHour * kSecondsinMinute);
    hour = (seconds % (kHoursInDay * kMinutesInHour * kSecondsinMinute)) / (kMinutesInHour * kSecondsinMinute);
    min = (seconds % (kMinutesInHour * kSecondsinMinute)) / kSecondsinMinute;
    sec = seconds % kSecondsinMinute;    

    cout << seconds << "초 = "
         << day << "일, "
         << hour << "시간, "
         << min << "분, "
         << sec << "초" << endl;

    return 0;
}
