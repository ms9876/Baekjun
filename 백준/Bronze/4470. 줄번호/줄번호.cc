#include <iostream>
#include <string>

using namespace std;

int main() 
{
	int n; 
    string input;
    
	cin >> n;
	cin.ignore();
	for (int i = 0; i < n; ++i)
	{
		getline(cin, input);
		cin.clear();
		cout << i + 1 << ". " << input << endl;
	}
}