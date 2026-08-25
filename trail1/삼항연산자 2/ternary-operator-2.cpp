#include <iostream>
using namespace std;

int main() {
    int a;
    cin >> a;

    char ans = a == 1 ? 't' : 'f';
    cout << ans;

    // cout << ((a == 1) ? 't' : 'f');
    return 0;
}