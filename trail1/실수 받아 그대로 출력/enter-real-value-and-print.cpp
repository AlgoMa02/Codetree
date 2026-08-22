#include <iostream>
using namespace std;

int main() {
    // 변수 선언
    double N;

    // 입력
    cin >> N;

    // 소수점 고정 및 자릿수 세팅
    cout << fixed;
    cout.precision(2);

    // 출력
    cout << N;
    return 0;
}