#include <iostream>
using namespace std;

int n;
int main() {
	cin >> n;

	for (int i = 1; i <= 9; i++)
		cout << n << " * " << i << " = " << n * i << endl;
}