#include <iostream>
#include <vector>
#include <algorithm> 

using namespace std;

int main()
{
	int n, k;
	int a[11];
	int count = 0, temp = 0;
	cin >> n >> k;

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = n - 1; i >= 0; i--) {
		if (temp = k / a[i]) {
			k -= k / a[i] * a[i];
			count += temp;
		}
	}

	cout << count << endl;
}