#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n, s, b;
    vector<pair<int, int>> v;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        cin >> s >> b;
        v.push_back({ s,b });
    }
    int ans = 1000000000;
    for (int i = 1; i < (1 << n); i++)
    {
        int s_sum = 1, b_sum = 0;
        for (int x = 0; x < n; x++)
        {
            if (i & (1 << x)) 
            {
                s_sum *= v[x].first;
                b_sum += v[x].second;
            }
        }
        ans = min(ans, abs(s_sum - b_sum));
    }
    cout << ans;
}