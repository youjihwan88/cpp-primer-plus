#include <iostream>

using namespace std;

int main()
{
    const int kFeetToInch = 12;
    const float kInchToMeter = 0.0254f;
    const float kPoundToKilogram = 1.0f / 2.2f;

    float feet, inch, pound;
    cout << "Enter your height(feet): ";
    cin >> feet;

    cout << "Enter your height(inch): ";
    cin >> inch;

    cout << "Enter your weight(pound): ";
    cin >> pound;

    float height_inch = kFeetToInch * feet + inch;
    float height_meter = kInchToMeter * height_inch;
    float weight_kilogram = kPoundToKilogram * pound;

    float bmi = weight_kilogram / (height_meter * height_meter);

    cout << "Your bmi is: " << bmi << endl;

    return 0;
}
