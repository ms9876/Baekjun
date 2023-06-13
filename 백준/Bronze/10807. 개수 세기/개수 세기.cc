#include <iostream>
using namespace std;

int n;
int main() {
	cin >> n;
	int* a = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int v;
	cin >> v;
	int count = 0;
	for (int i = 0; i < n; i++) {
		if (a[i] == v) {
			count++;
		}
	}
	cout << count;
}