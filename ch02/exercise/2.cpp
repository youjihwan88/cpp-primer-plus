#include <iostream>
double ConvertMileToKillometer(double);

using namespace std;

int main()
{
    double input;
    cin >> input;

    cout << "Convert " << input << " mile to killometer : "
         << ConvertMileToKillometer(input) << " killometers" << endl;

    return 0;
}

double ConvertMileToKillometer(double mile)
{
    return 1.60934 * mile;
}
