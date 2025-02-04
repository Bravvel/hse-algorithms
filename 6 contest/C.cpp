#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
void solve() {
    int s, b;
    cin >> s >> b;
    long long p1, p2;
    vector<long long> ship(s);
    vector < pair<long long, long long>> base(b);
    for (int i = 0; i < s; i++) {
        cin >> ship[i];
    }
    for (int i = 0; i < b; i++) {
        cin >> p1 >> p2;
        base[i] = make_pair(p1, p2);
    }
    sort(base.begin(), base.end());
    for (int i = 1; i < b; i++) {
        base[i].second += base[i-1].second;
    }
    for (int i = 0; i < s; i++) {
        int l = 0, r = b - 1, m = 0;
        if (ship[i] < base[0].first) {
            cout << 0 << ' ';
            continue;
        }
        if (ship[i] > base[b - 1].first) {
            cout << base[b - 1].second << ' ';
            continue;
        }
        while (l <= r) {
            m = (r+l)/2;
            if (m == b - 1) {
                if (base[m].first <= ship[i]) {
                    cout << base[m].second << ' ';
                    break;
                }
            }
            else {
                if (base[m].first <= ship[i] && base[m + 1].first > ship[i]) {
                    cout << base[m].second << ' ';
                    break;
                }
                else if (base[m].first < ship[i]) {
                    l = m;
                }
                else {
                    r = m;
                }
            }     
        }
    }
}
 
int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    solve();
    return 0;
}
