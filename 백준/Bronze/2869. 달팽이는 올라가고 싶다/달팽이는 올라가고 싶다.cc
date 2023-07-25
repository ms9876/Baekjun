#include <iostream>

using namespace std;

int main() {
	int a, b, v;
	int answer;
	cin >> a >> b >> v;
	
	if(v <= a) 
        answer = 1;
	else {
		v -= a;
		if(v % (a - b))
            answer = v / (a - b) + 2;
		else 
            answer = v / (a - b) + 1;
	}
	cout << answer;
	
}