#include <iostream>

using namespace std;

int main() {
    double k, n, m;
    cin >> k >> n >> m;
    if (k * n > m)
        cout << k * n - m << '\n';
    else
        cout << "0" << '\n';
}