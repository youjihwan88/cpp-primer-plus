// arrfunc1.cpp -- functions with an array argument

#include <iostream>
int sum_arr(int arr[], int n);

const int ARR_SIZE = 8;

int main()
{
    using namespace std;

    int cookies[ARR_SIZE] = {1, 2, 4, 8, 16, 32, 64, 128};

    int sum = sum_arr(cookies, ARR_SIZE);
    cout << "Total cookies eaten: " << sum << " \n";

    return 0;
}

int sum_arr(int arr[], int n)
{
    int total = 0;

    for (int i = 0; i < n; ++i)
    {
        total += arr[i];
    }
    return total;
}
