#include <iostream>

using namespace std;

int main()
{
    double miles, gallens;
    cout << "Enter your miles: ";
    cin >> miles;

    cout << "Enter your gallens: ";
    cin >> gallens;

    double miles_per_gallen = miles / gallens;
    cout << "Your miles per gallen is " << miles_per_gallen << "." << endl;

    return 0;
}
