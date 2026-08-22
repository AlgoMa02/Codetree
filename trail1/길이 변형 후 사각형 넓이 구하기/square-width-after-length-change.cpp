#include <iostream>
using namespace std;

int main() {
    // 변수 선언 및 입력
    int a, b;
    cin >> a >> b;

    // 길이 변경
    a += 8;
    b *= 3;

    // 출력
    cout << a << "\n" << b << "\n" << a * b;
    return 0;
}