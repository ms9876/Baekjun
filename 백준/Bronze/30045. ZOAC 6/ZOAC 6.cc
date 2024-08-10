#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n, sum = 0;
    string str;
    
    cin >> n;
    
    for (int i = 0; i < n; ++i)
    {
        cin >> str;
        
        if (str.find("OI") != string::npos || str.find("01") != string::npos)
            sum++;
    }
    
    cout << sum;
}