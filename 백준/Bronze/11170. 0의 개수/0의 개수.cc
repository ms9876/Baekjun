#include <iostream>
#include <string>
using namespace std;

int main() {
    int t, n, m, cnt = 0;
    string a = "";
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n >> m;

        for (int j = n; j <= m; j++)
        {
            a = to_string(j);
            for (int k = 0; k < a.size(); k++)
            {
                if (a[k] == '0') {
                    cnt++;
                }
            }
        }

        cout << cnt << endl;
        cnt = 0;
    }
}