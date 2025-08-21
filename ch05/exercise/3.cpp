#include <iostream>

using namespace std;

int main()
{
    int x;
    int sum = 0;
    while (true)
    {
        cin >> x;
        if (x == 0)
        {
            break;
        }

        sum += x;
        cout << "Sum: " << sum << endl;
    }

    return 0;
}
