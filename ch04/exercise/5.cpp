#include <iostream>

using namespace std;

struct CandyBar
{
    char name[100];
    float weight;
    int cal;
};

int main()
{
    CandyBar snack = {"Mocha Munch", 2.3, 350};

    cout << "CandyBar name: " << snack.name
         << ", weight: " << snack.weight
         << ", cal: " << snack.cal << endl;

    return 0;
}
