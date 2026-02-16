#include <iostream>
#include <vector>
#include <algorithm> // sort, unique
#include <string>

using namespace std;

bool compare(string a, string b) {
    // 1. 길이가 다르면, 짧은 게 먼저
    if (a.length() != b.length()) {
        return a.length() < b.length();
    }
    // 2. 길이가 같으면, 사전 순으로
    else {
        return a < b;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;

    vector<string> v; // 문자열을 저장할 벡터
    string str;

    // 입력 받기
    for (int i = 0; i < N; i++) {
        cin >> str;
        v.push_back(str); // 벡터에 추가
    }

    sort(v.begin(), v.end(), compare);

    v.erase(unique(v.begin(), v.end()), v.end());

    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << "\n";
    }

    return 0;
}