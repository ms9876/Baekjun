#include <iostream>
using namespace std;

int main()
{
    int n, m, k;
    cin >> n >> m >> k;
    if (n + m == k)
        cout << "correct!";
    else
        cout << "wrong!";
}