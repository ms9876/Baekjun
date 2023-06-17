#include <iostream>
using namespace std;

int num;
int rm[42] = { 0 };
int cnt = 0;

int main() {
	for (int i = 0; i < 10; i++) {
		cin >> num;
		rm[num % 42]++;
	}
	for (int i = 0; i < 42; i++) {
		if (rm[i] != 0)
			cnt++;
	}
    
	cout << cnt << endl;
}