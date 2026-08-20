#include <iostream>
using namespace std;

int main() {
    cout << fixed;

    int weight = 13;
    double ratio = 0.165;

    cout.precision(6);

    cout << weight << " * " << ratio << " = " << weight * ratio;
    return 0;
}