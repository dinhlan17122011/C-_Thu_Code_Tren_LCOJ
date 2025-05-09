#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("DC.INP", "r", stdin);
    freopen("DC.OUT", "w", stdout);

    int N, K;
    cin >> N >> K;

    map<long long, int> m;

    for (int i = 0; i < N; ++i) {
        long long a, b;
        cin >> a >> b;
        m[a] += 1;
        m[b + 1] -= 1;
    }

    long long res = 0;
    int cnt = 0;
    long long prev = 0;

    bool first = true;

    for (auto &[pos, delta] : m) {
        if (!first && cnt == K) {
            res += pos - prev;
        }
        cnt += delta;
        prev = pos;
        first = false;
    }

    cout << res << '\n';
    return 0;
}
