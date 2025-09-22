#include <iostream>

#include "8_list.h"

List::List()
{
    idx = 0;
}

void List::addItem(Item item)
{
    items[idx] = item;
    idx++;
}

bool List::isempty() const
{
    if (idx == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
bool List::isfull() const
{
    if (idx == MAX)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void List::show() const
{
    for (int i = 0; i < idx; ++i)
    {
        std::cout << "idx " << i << ": " << items[i] << std::endl;
    }
}