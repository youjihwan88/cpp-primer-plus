#include <iostream>

using namespace std;

struct PizzaCompnay
{
    char name[100];
    float diameter;
    float weight;
};

int main()
{
    PizzaCompnay pizza_company = {};
    cout << "피자 회사의 이름을 입력하세요: ";
    cin.getline(pizza_company.name, 100);
    cout << "피자의 지름을 입력하세요: ";
    cin >> pizza_company.diameter;
    cout << "피자의 중량을 입력하세요: ";
    cin >> pizza_company.weight;

    cout << "피자 회사의 이름은: " << pizza_company.name << endl;
    cout << "피자의 지름은: " << pizza_company.diameter << endl;
    cout << "피자의 중량은: " << pizza_company.weight << endl;

    return 0;
}
