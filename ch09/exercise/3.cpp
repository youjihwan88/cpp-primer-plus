#include <iostream>
#include <cstring>
#include <new>

using namespace std;

struct chaff
{
    char dross[20];
    int slag;
};

const int N = 2;

int main()
{
    char buffer[N * sizeof(chaff)];
    chaff *pt = new (buffer) chaff[N];

    strcpy(pt[0].dross, "abc");
    pt[0].slag = 10;
    strcpy(pt[1].dross, "def");
    pt[1].slag = 20;

    for (int i = 0; i < N; ++i)
    {
        cout << "Element " << i << endl;
        cout << "    dross: " << pt[i].dross << ",  slag: " << pt[i].slag << endl;
    }

    return 0;
}
