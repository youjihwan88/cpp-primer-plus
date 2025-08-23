#include <iostream>
#include <array>

using namespace std;

const int kArrSize = 101; // example of external declaration

int main()
{
    array<long double, kArrSize> factorials;
    factorials[1] = factorials[0] = 1;
    for (int i = 2; i < kArrSize; i++)
        factorials[i] = i * factorials[i - 1];
    for (int i = 0; i < kArrSize; i++)
        std::cout << i << "! = " << factorials[i] << std::endl;

    return 0;
}
