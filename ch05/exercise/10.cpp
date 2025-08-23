#include <iostream>

using namespace std;

int main()
{
    int n_rows;
    cout << "출력할 행 수를 입력하시오: ";
    cin >> n_rows;

    for (int i = 0; i < n_rows; ++i)
    {
        for (int j = 0; j < n_rows - i - 1; ++j)
        {
            cout << ".";
        }

        for (int j = 0; j < i + 1; ++j)
        {
            cout << "*";
        }

        cout << "\n";
    }

    return 0;
}
