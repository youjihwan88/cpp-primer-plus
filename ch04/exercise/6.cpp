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
    CandyBar candys[2] = {
        {"Mocha Munch", 2.3, 350},
        {"Couque Dasse", 3.3, 330},
    };

    cout << "CandyBar1 name: " << candys[0].name
         << ", weight: " << candys[0].weight
         << ", cal: " << candys[0].cal << endl;

    cout << "CandyBar2 name: " << candys[1].name
         << ", weight: " << candys[1].weight
         << ", cal: " << candys[1].cal << endl;

    return 0;
}
