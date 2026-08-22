#include <iostream>
using namespace std;

int main() {
    // 변수 선언 및 입력
    int a, b, c;
    cin >> a;
    cin.get();
    cin >> b;
    cin.get();
    cin >> c;

    // 출력
    cout << "010" << '-' << c << '-' << b;
    return 0;
}