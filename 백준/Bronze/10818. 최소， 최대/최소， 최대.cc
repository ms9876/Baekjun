#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;

	int max, min, x;
	cin >> x;
	max = x;
	min = x;
	for (int i = 0; i < n-1; i++) {
		cin >> x;
		if (x > max) max = x;
		if (x < min) min = x;
	}
	cout << min << ' ' << max;
}