#include <iostream>

using namespace std;

int main()
{
    const int kMeterToCentiMeter = 100;
    int height;
    cout << "Enter your height(cm): ___\b\b\b";
    cin >> height;

    cout << "You are " << height / kMeterToCentiMeter << " meter and "
         << height % kMeterToCentiMeter << " centimeters.";

    return 0;
}
