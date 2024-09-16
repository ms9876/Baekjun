#include <iostream>
using namespace std;

int main()
{
    int parent, child, row, col;
    parent = child = row = col = 1;
    long long a;
    cin >> a;
    for (long long i = 1; i < a; i++)        // a = 1 이면 실행 안함
    {
        if (row == col)
        {
            row++;
            col = 1;
            if (row % 2 == 0)        // 짝수이면
            {
                parent = row;
                child = 1;
            }
            else
            {
                parent = 1;
                child = row;
            }
        }
        else
        {
            col++;
            if (row % 2 == 0)        // 짝수줄이면
            {
                parent--;
                child++;
            }
            else
            {
                parent++;
                child--;
            }
        }
    }
    cout << child << "/" << parent;
}