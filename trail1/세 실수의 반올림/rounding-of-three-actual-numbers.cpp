#include <iostream>
using namespace std;

int main() {
    // 변수 선언 및 입력
    double a, b, c;
    cin >> a >> b >> c;

    // 소수점 자리 세팅
    cout << fixed;
    cout.precision(3);

    // 출력
    cout << a << "\n" << b << "\n" << c;
    return 0;
}