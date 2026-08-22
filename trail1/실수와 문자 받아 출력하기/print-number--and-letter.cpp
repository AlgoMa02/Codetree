#include <iostream>
using namespace std;

int main() {
    // 변수 선언 및 입력
    char c;
    double a, b; 
    cin >> c >> a >> b;

    // 소수점 자리 세팅
    cout << fixed;
    cout.precision(2);

    // 출력
    cout << c << "\n" << a << "\n" << b;
    return 0;
}