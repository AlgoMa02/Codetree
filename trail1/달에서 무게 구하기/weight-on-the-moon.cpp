#include <iostream>
using namespace std;

int main() {
    // 변수 선언
    int weight = 13;
    double ratio = 0.165;

    cout << fixed;
    cout.precision(6);

    // 출력
    cout << weight << " * " << ratio << " = " << weight * ratio;
    return 0;
}