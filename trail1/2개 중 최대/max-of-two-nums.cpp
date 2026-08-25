#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    // 삼항연산자!
    int max = a < b ? b : a;
    cout << max;
    return 0;
}