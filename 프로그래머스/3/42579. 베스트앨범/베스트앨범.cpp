#include <string>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <algorithm>
using namespace std;

struct music
{
    int index, count;
};

bool cmp1(pair<string, pair<int, vector<music>>>& left, pair<string, pair<int, vector<music>>>& right)
{
    return left.second.first > right.second.first;
}

bool cmp2(music left, music right)
{
    if (left.count == right.count)
        return left.index < right.index;
    return left.count > right.count;
}

vector<int> solution(vector<string> genres, vector<int> plays) {

    vector<int> answer;

    unordered_map<string, pair<int, vector<music>>> total_m;

    for (auto i = 0; i < genres.size(); i++) {

        total_m[genres[i]].first += plays[i];
        total_m[genres[i]].second.push_back({ i, plays[i] });
    }

    vector<pair<string, pair<int, vector<music>>>> total_v{ total_m.begin(), total_m.end() };

    sort(total_v.begin(), total_v.end(), cmp1);

    for (auto item : total_v) {

        int cnt = 0;
        sort(item.second.second.begin(), item.second.second.end(), cmp2);

        for (int i = 0; i < item.second.second.size(); ++i) {

            if (cnt == 2) break;

            answer.push_back(item.second.second[i].index);
            cnt++;
        }
    }

    return answer;
}