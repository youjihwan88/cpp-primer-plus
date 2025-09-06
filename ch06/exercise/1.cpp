#include <iostream>
#include <cctype>

using namespace std;

int main()
{
    char ch;
    cin.get(ch);

    while (ch != '@')
    {
        if (isalpha(ch))
        {
            if (isupper(ch))
            {
                cout << char(tolower(ch));
            }
            else
            {
                cout << char(toupper(ch));
            }
        }
        else if (isspace(ch))
        {
            cout << ch;
        }
        else if (isdigit(ch))
        {
            continue;
        }

        cin.get(ch);
    }

    return 0;
}
