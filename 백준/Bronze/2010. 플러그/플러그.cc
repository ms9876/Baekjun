#include <iostream>

using namespace std;

int main() {
	int n, m, cnt = 0;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> m;
		cnt += m - 1;
	}
	
	cout << cnt + 1;
}