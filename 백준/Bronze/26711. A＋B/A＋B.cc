#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main() {
 
    string n, m, ans = { };
    int temp, carry = 0;

    cin >> n >> m;

    while (n.length() != m.length()) {

        if (n.length() > m.length())
            m.insert(0, "0");
        else
            n.insert(0, "0");
    }

    if (n.length() == m.length()) { 

        for (int i = n.length() - 1; i >= 0; --i) {

            temp = n[i] - '0' + m[i] - '0' + carry; 

            if (temp >= 10) {

                temp -= 10;
                carry = 1;
            }
            else
                carry = 0;

            ans.insert(0, to_string(temp));
        }

        if (carry > 0)
            ans.insert(0, to_string(carry));
    }

    cout << ans;
}