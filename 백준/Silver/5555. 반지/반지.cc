#include <iostream>

using namespace std;

int main() {
	string s, s1;
	int n, cnt = 0;

	cin >> s >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> s1;
		s1 += s1;
		if (s1.find(s) != string::npos)
			cnt++;
	}

	cout << cnt;
}