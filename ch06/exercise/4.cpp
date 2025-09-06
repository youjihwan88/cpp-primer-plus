#include <iostream>

using namespace std;

const int kStrSize = 100;
struct Bop
{
    char fullname[kStrSize]; // 실명
    char title[kStrSize];    // 직함
    char bopname[kStrSize];  // BOP 아이디
    int preference;          // 0 = fullname, 1 = title, 2 = bopname;
};

int main()
{
    Bop members[5] = {
        {"A", "AA", "AAA", 0},
        {"B", "BB", "BBB", 1},
        {"C", "CC", "CCC", 2},
        {"D", "DD", "DDD", 0},
        {"E", "EE", "EEE", 1},
    };

    cout << "Benevolent Order of Programmers\n";
    cout << "a. 실명으로 열람\t\tb. 직함으로 열람\n";
    cout << "c. BOP 아이디로 열람\t\td. 회원이 지정한 것으로 열람\n";
    cout << "q. 종료\n";

    char ch;
    while (true)
    {
        cout << "원하는 것을 선택하십시오: ";
        cin >> ch;
        switch (ch)
        {
        case 'a':
            for (int i = 0; i < sizeof(members) / sizeof(members[0]); ++i)
            {
                cout << members[i].fullname << endl;
            }
            break;
        case 'b':
            for (int i = 0; i < sizeof(members) / sizeof(members[0]); ++i)
            {
                cout << members[i].title << endl;
            }
            break;
        case 'c':
            for (int i = 0; i < sizeof(members) / sizeof(members[0]); ++i)
            {
                cout << members[i].bopname << endl;
            }
            break;
        case 'd':
            for (int i = 0; i < sizeof(members) / sizeof(members[0]); ++i)
            {
                switch (members[i].preference)
                {
                case 0:
                    cout << members[i].fullname << endl;
                    break;
                case 1:
                    cout << members[i].title << endl;
                    break;
                case 2:
                    cout << members[i].bopname << endl;
                    break;
                }
            }
            break;
        case 'q':
            break;
        default:
            break;
        }
        if (ch == 'q')
        {
            cout << "프로그램을 종료합니다.\n";
            break;
        }
    }

    return 0;
}
