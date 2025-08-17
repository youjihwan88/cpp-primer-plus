// structur.cpp -- a simple structure

#include <iostream>

struct inflatable // structure declaration
{
    char name[20];
    float volume;
    double price;
};

int main()
{
    using namespace std;

    inflatable guest =
        {"Glorious Gloria",
         1.88,
         29.99};
    inflatable pal =
        {"Adacious Arthur",
         3.12,
         32.99};

    cout << "Expand your geust list with " << guest.name;
    cout << " and " << pal.name << "!\n";
    cout << "You can have both for $";
    cout << guest.price + pal.price << "!\n";

    return 0;
}
