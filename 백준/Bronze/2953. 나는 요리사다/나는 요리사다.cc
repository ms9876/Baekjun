#include <iostream>

using namespace std;

int main() {
    int n, sum = 0, max = 0, wNum = 0;
    
    for (int i = 0; i < 5; i++) {
        sum = 0;
       
        for (int j = 0; j < 4; j++) {
            cin >> n;
            sum += n;
        }
        if (sum > max) {
            max = sum;
            wNum = i + 1;
        }
    }
    cout << wNum << " " << max;
}