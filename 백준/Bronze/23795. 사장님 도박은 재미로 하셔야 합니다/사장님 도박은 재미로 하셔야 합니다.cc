#include <iostream>
using namespace std;

int main()
{
    int n, sum = 0;
    
    while (cin >> n)
    {
        if (n == -1)
            break;
        
        sum += n;
    }
    
    cout << sum;
}