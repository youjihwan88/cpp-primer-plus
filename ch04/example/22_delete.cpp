// delete.cpp -- using the delete operator

#include <iostream>
#include <cstring>
char *getname(void);

using namespace std;

int main()
{
    char *name;

    name = getname();
    cout << name << " at " << (void *)name << "\n";
    delete[] name;

    name = getname();
    cout << name << " at " << (void *)name << "\n";
    delete[] name;

    return 0;
}

char *getname()
{
    char temp[80];
    cout << "Enter last name: ";
    cin >> temp;

    char *pn = new char[strlen(temp) + 1];
    strcpy(pn, temp);

    return pn;
}