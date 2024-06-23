#include <iostream>
#include <stack>
using namespace std;

int main()
{
    int n, count = 0;
    string input;
    stack<char> lr, sk;
    cin >> n;
    cin >> input;
    for (int i = 0; i < n; i++)
    {
        if (input[i] == 'L')
        {
            lr.push(input[i]);
        }
        else if (input[i] == 'R')
        {
            if (!lr.empty() && lr.top() == 'L')
            {
                lr.pop();
                count++;
            }
            else
            {
                break;
            }
        }
        else if (input[i] == 'S')
        {
            sk.push(input[i]);
        }
        else if (input[i] == 'K')
        {
            if (!sk.empty() && sk.top() == 'S')
            {
                sk.pop();
                count++;
            }
            else
            {
                break;
            }
        }
        else
        {
            count++;
        }
    }
    cout << count;
}