#include <iostream>
#include <queue>
using namespace std;

int main()
{
    cin.tie(NULL);
    std::ios_base::sync_with_stdio(false);

    int t, n;
    string str;
    queue<int> q;
    cin >> t;
    for (int i = 0; i < t; ++i)
    {
        cin >> str;
        if (str == "push")
        {
            cin >> n;
            q.push(n);
        }
        else if (str == "front")
        {
            if (!q.empty())
                cout << q.front() << '\n';
            else
                cout << "-1" << '\n';
                
        }
        else if (str == "back")
        {
            if (!q.empty())
                cout << q.back() << '\n';
            else
                cout << "-1" << '\n';
        }
        else if (str == "size")
            cout << q.size() << '\n';
        else if (str == "empty")
            cout << q.empty() << '\n';
        else if (str == "pop")
        {
            if (q.empty())
                cout << "-1" << '\n';
            else
            {
                cout << q.front() << '\n';
                q.pop();
            }
        }
    }
}