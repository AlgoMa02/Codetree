#include <iostream>
using namespace std;

int main() {
    // 변수 선언
    double ft = 30.48;
    int mi = 160934;

    cout << fixed;
    cout.precision(1);

    // 출력
    cout << "9.2ft" << " = " << ft * 9.2 << "cm\n";
    cout << "1.3mi" << " = " << mi * 1.3 << "cm";
    return 0;
}