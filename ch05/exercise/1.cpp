#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cout << "두 개의 정수를 차례로 입력하세요.\n";
    cout << "정수1 : ";
    cin >> a;
    cout << "정수2 : ";
    cin >> b;

    int sum = 0;
    for (int i = a; i <= b; i++)
    {
        sum += i;
    }

    cout << a << "부터 " << b << "까지의 합은 " << sum << "입니다." << endl;
    return 0;
}