#include <iostream>

using namespace std;

int main()
{
    long long global_population, usa_population;
    double ratio;

    cout << "세계 인구수를 입력하시오: ";
    cin >> global_population;

    cout << "미국의 인구수를 입력하시오: ";
    cin >> usa_population;
    
    ratio = (double) usa_population / global_population * 100.0;

    cout.setf(ios_base::fixed, ios_base::floatfield);
    cout << "세계 인구수에서 미국이 차지하는 비중은 " << ratio << "%이다." << endl; 

    return 0;
}
