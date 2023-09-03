#include<iostream>
using namespace std;

int main()
{
	string A, B, C, D;
    
	cin >> A >> B >> C >> D;
    
	string AB = A + B;
	string CD = C + D;
    
	long iAB = stoll(AB);
    long iCD = stoll(CD);
    
	long long answer = iAB + iCD;
    
	cout << answer;
}