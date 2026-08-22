#include <iostream>
using namespace std;

int main() {
    // 변수 선언
    int a = 5, b = 6, c = 7;

    // 교체
    int temp = a;
    a = c;
    c = b;
    b = temp;
    
    // 출력
    cout << a << "\n" << b << "\n" << c;
    return 0;
}