#include <iostream>
#include <string>
using namespace std;

int main()
{
 //https://www.acmicpc.net/problem/9935

    ios::sync_with_stdio(false);

    string str, bomb, ans, check;
    int n = 0;

    cin >> str >> bomb; // abaabcdbcdcd abcd

    for (int i = 0; i < str.size(); i++) { // 입력 받은 문장 길이만큼 반복

        ans += str[i]; // ans에 한 글자씩 차례대로 넣어준다

        if (str[i] == bomb.back() && ans.size() >= bomb.size()) { // 현재 ans에 bomb로 의심되는 문자열이 들어가 있다면

            check = ""; // check 초기화
            n = 0; // n 초기화 (bomb 검사를 위한 인덱스)

            for (int j = ans.length() - bomb.length(); j < ans.length(); ++j) { // ans의 맨 끝에서 bomb 크기만큼 앞으로 당겨 검사한다

                if (ans[j] == bomb[n]) { // 같다면 (ex. ans -> ababcd에서 j -> a부터 시작)

                    check.push_back(ans[j]); // check에 넣어준다
                    n++; // n++
                }
                else // 만약 한 번이라도 다르다면 폭발 문자열이 들어가 있지 않기 때문에 break하여 나가준다.
                    break;

                if (check == bomb) { // check가 bomb와 같다면 (str 안에 폭발 문자열이 들어가 있다면)

                    ans.erase(ans.length() - bomb.length(), ans.length()); // j의 시작 위치부터 끝까지(a ~ d)
                    break;
                }
            }
        }
    }

    if (ans == "") // 다 끝났을 때 ans가 비어 있다면 (문자열이 전부 폭발)
        cout << "FRULA";
    else // ans가 남아 있다면 (폭발에서 살아남은 문자열)
        cout << ans; // 출력
}