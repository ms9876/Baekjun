#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n, m, l;
    while (cin >> n >> m >> l)
    {
        if (n == 0 && m == 0 && l == 0)
            break;
        vector<int> vec = { n, m, l };
        sort(vec.begin(), vec.end());
        if ((vec[0] * vec[0]) + (vec[1] * vec[1]) == (vec[2] * vec[2]))
            cout << "right" << '\n';
        else
            cout << "wrong" << '\n';
    }
}