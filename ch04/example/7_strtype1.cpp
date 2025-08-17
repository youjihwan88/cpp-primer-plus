// strtype1.cpp -- using the C++ string class

#include <iostream>
#include <string> // make string class available

int main()
{
    using namespace std;

    char charr1[20];            // create and empty array
    char charr2[20] = "jaguar"; // crate an initialized array
    string str1;                // create an empty string object
    string str2 = "panther";    // create an initialized string

    cout << "Enter a kined of feline: ";
    cin >> charr1;
    cout << "Enter another kind of eline: ";
    cin >> str1;

    cout << "Here ar some felines:\n";
    cout << charr1 << " " << charr2 << " "
         << str1 << " " << str2
         << endl;

    cout << "The third letter in " << charr2 << " is "
         << charr2[2] << endl;
    cout << "The third letter in " << str2 << " is "
         << str2[2] << endl;

    return 0;
}
