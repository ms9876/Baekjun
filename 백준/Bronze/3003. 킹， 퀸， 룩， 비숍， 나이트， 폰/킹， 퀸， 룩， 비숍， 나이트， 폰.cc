#include <iostream>

using namespace std;

int main() {
    int arr[7] = { 1, 1, 2, 2, 2, 8 };
    int cnt;

    for (int i = 0; i < 6; i++) {
        cin >> cnt;
        cout << arr[i] - cnt << ' ';
    }

    return 0;
}