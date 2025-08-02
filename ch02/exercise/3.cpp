#include <iostream>
void Print1();
void Print2();

using namespace std;

int main()
{
    Print1();
    Print1();

    Print2();
    Print2();

    return 0;
}

void Print1()
{
    cout << "Three blind mice" << endl;
    return;
}

void Print2()
{
    cout << "See how they run" << endl;
    return;
}
