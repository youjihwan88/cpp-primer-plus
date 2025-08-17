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
    CandyBar *pt = new CandyBar[3];
    pt[0] = {"aa", 1.1, 1};
    pt[1] = {"bb", 2.2, 2};
    pt[2] = {"cc", 3.3, 3};

    cout << "CandyBar1 name: " << pt->name
         << ", weight: " << pt->weight
         << ", cal: " << pt->cal << endl;
    cout << "CandyBar2 name: " << (pt + 1)->name
         << ", weight: " << (pt + 1)->weight
         << ", cal: " << (pt + 1)->cal << endl;
    cout << "CandyBar3 name: " << (pt + 2)->name
         << ", weight: " << (pt + 2)->weight
         << ", cal: " << (pt + 2)->cal << endl;

    return 0;
}