#include <iostream>
#include "8_list.h"

int main()
{
    List li;
    std::cout << "li is empty? " << li.isempty() << std::endl;
    std::cout << "li is full? " << li.isfull() << std::endl;

    std:: cout << "Add item 3 & 5 in list" << std::endl;
    li.addItem(3);
    li.addItem(5);

    std::cout << "li is empty? " << li.isempty() << std::endl;
    std::cout << "li is full? " << li.isfull() << std::endl;

    li.show();

    return 0;
}