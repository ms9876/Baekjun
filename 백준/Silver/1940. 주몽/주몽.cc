#include <iostream>
#include <stdio.h>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int n, m, count = 0;

    cin >> n >> m;
    int* list;
    list = new int[n];

    for (int i = 0; i < n; i++) {
        cin >> list[i];
    }

    for (int i = 0; i < n - 1; i++) { 
        for (int j = i + 1; j < n; j++) { 

            if (list[i] + list[j] == m) {
                count++;
            }
        }
    }
    cout << count << '\n';
}