#include <iostream>
using namespace std;

int main() {
    // 변수 선언 및 입력
    double a, b;
    cin >> a >> b;

    // 소수점 자리 세팅
    cout << fixed;
    cout.precision(2);

    // 출력
    cout << a + b;
    return 0;
}