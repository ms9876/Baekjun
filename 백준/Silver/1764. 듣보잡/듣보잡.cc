#include <iostream>
#include <map>
#include <string>
#include <algorithm>
#include <vector>
#include <unordered_map>
#include <set>  
using namespace std;

int main() {
    set<string> list;
    set<string> list1;
    string s;

    int n, m;
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        cin >> s;
        list.insert(s);
    }
    for (int i = 0; i < m; i++) {
        cin >> s;
        if (list.find(s) != list.end())
        {
            list1.insert(s);
        }
    }
    cout << list1.size() << endl;

    for (auto a : list1)
    {
        cout << a << endl;
    }
}