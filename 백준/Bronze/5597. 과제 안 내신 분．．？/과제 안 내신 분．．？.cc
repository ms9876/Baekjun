#include <iostream>
using namespace std;

int a[31], n;
int main() {
    for (int i = 1; i <= 28; i++) {
        cin >> n;
        a[n] = 1;
    }
    for (int i = 1; i <= 30; i++) {
        if (a[i] == 0)
            cout << i << endl;
    }
}