#include <iostream>
#include <string>

using namespace std;

int main()
{
    int count = 0;
    string input;
    while (true)
    {
        cin >> input;
        if (input == "done")
        {
            break;
        }
        count++;
    }
    cout << "총 " << count << " 단어가 입력되었습니다.\n";

    return 0;
}
