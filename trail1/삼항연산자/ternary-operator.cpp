#include <iostream>
#include <string>
using namespace std;

int main() {
    int score;
    cin >> score;

    //string result = score == 100 ? "pass" : "failure";
    //cout << result;

    // 다른 풀이법
    cout << ((score == 100) ? "pass" : "failure");
    return 0;
}