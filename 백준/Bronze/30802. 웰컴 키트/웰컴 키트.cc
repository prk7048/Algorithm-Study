#include <iostream>
#include <vector>

using namespace std;

int main() {
    // 1. 빠른 입출력 (0.1초 제한 대비)
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    if (!(cin >> N)) return 0;

    vector<int> sizes(6);
    for(int i = 0; i < 6; i++) {
        cin >> sizes[i];
    }

    int T, P;
    cin >> T >> P;

    // 2. 티셔츠 묶음 계산 (올림 공식 활용)
    int t_bundles = 0;
    for(int s : sizes) {
        t_bundles += (s + T - 1) / T;
    }

    // 3. 펜 계산 (나머지 연산 활용)
    int p_bundles = N / P;
    int p_singles = N % P;

    cout << t_bundles << "\n";
    cout << p_bundles << " " << p_singles << "\n";

    return 0;
}