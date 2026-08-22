#include <iostream>
using namespace std;

int main() {
    // 변수 선언 및 입력
    double a;
    cin >> a;

    cout << fixed;
    cout.precision(2);

    // 출력
    cout << a + 1.5;
    return 0;
}