#include <iostream>

int Fill_array(double arr[], int n);
void Show_array(const double arr[], int n);
void Reverse_array(double arr[], int n);

const int ARR_SIZE = 5;

int main()
{
    using namespace std;

    double arr[ARR_SIZE];
    int count = Fill_array(arr, ARR_SIZE);
    cout << "You enetered " << count << " elements\n";

    Show_array(arr, count);

    Reverse_array(arr, count);
    Show_array(arr, count);

    Reverse_array(arr + 1, count - 2);
    Show_array(arr, count);

    return 0;
}

int Fill_array(double arr[], int n)
{
    using namespace std;
    cout << "Fill array with " << ARR_SIZE << " elements.\n";

    int i = 0;
    while (true)
    {
        if (i == n || !(cin >> arr[i]))
        {
            break;
        }

        ++i;
    }
    return i;
}

void Show_array(const double arr[], int n)
{
    using namespace std;
    cout << "\nPrint array elements.\n";
    for (int i = 0; i < n; ++i)
    {
        cout << arr[i] << ", ";
    }
}

void Reverse_array(double arr[], int n)
{
    using namespace std;
    if (n < 2)
    {
        return;
    }
    cout << "\nReverse array\n";
    for (int i = 0; i < n / 2; ++i)
    {
        double temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }
}
