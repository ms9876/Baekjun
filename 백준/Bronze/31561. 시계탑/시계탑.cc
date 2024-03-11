#include <iostream>
using namespace std;

int main() {
    double n;
    cin >> n;
    
    cout << fixed;
    cout.precision(1);        // 소숫점 첫번쨰 고정

    cout << (n < 30 ? n / 2 : 15 + ((n - 30) / 2 * 3));
}