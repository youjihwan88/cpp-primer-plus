#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    int count = 0;
    char input[100];
    while (true)
    {
        cin >> input;
        if (strcmp(input, "done") == 0)
        {
            break;
        }
        count++;
    }
    cout << "총 " << count << " 단어가 입력되었습니다.\n";

    return 0;
}