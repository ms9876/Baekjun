#include <iostream>

using namespace std;

int main(){
    int n, arr[3];
    int cnt = 0;
    
    cin >> n >> arr[0] >> arr[1] >> arr[2];
    
    for (int i = 0; i < 3; i++) {
        if(arr[i] - n < 0)
            cnt += arr[i];
        else
            cnt += n;
    }
    cout << cnt;
}