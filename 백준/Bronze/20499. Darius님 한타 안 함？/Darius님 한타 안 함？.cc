#include <iostream>
 
using namespace std;

int main() {
    int k, d, a;
    scanf("%d/%d/%d", &k, &d, &a);  // 입력을 K/D/A 형식으로 받아주기 위해

    if (k + a < d || d == 0) 
        cout << "hasu";
    else 
        cout << "gosu";
    
    return 0;
}
