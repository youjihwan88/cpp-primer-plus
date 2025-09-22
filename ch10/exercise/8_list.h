#ifndef LIST_H_
#define LIST_H_

typedef int Item;

class List
{
private:
    static const int MAX = 10;
    Item items[MAX];
    int idx;

public:
    List();
    void addItem(Item item);
    bool isempty() const;
    bool isfull() const;
    void show() const;
};

#endif
