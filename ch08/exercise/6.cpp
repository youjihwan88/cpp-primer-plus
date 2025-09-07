#include <iostream>
#include <cstring>

template <typename T>
T maxn(T arr[], int n);

template <>
char *maxn<char *>(char *arr[], int n);

int main()
{
    using namespace std;
    int arr1[6] = {1, 3, 5, 7, 4, 2};
    cout << maxn(arr1, 6) << endl;

    double arr2[4] = {100.0, 200.0, 250.0, -100.0};
    cout << maxn(arr2, 4) << endl;

    const char *arr3[5] = {"chi", "5abc5", "abcde", "ab", "3als"};
    cout << maxn(arr3, 5) << endl;

    return 0;
}

template <typename T>
T maxn(T arr[], int n)
{
    T maxVal = arr[0];
    for (int i = 1; i < n; ++i)
    {
        if (arr[i] > maxVal)
        {
            maxVal = arr[i];
        }
    }

    return maxVal;
}

template <>
char *maxn<char *>(char *arr[], int n)
{
    int maxLen = strlen(arr[0]);
    int maxIdx = 0;
    for (int i = 1; i < n; ++i)
    {
        int len = strlen(arr[i]);
        if (len > maxLen)
        {
            maxLen = len;
            maxIdx = i;
        }
    }
    return arr[maxIdx];
}
