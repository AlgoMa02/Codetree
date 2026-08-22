#include <iostream>
using namespace std;

int main() {
    // 변수 선언
    int a = 1, b = 2, c = 3;
    
    // 값 변경
    a = b = c = a + b + c;

    // 출력
    cout << a << " " << b << " " << c;
    return 0;
}