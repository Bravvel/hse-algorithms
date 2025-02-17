#include <iostream>
#include <vector>
#include <algorithm>
 
typedef long long ll;
 
using namespace std;
 
bool comp(ll a, ll b) {
    return a > b;
}
 
void solve() {
    int n, m;
    cin >> n >> m;
    vector<vector<ll>> a(m);
    vector<ll> prefixsum(n+10);
    pair<ll, ll> tmp;
    for (int i = 0; i < n; i++) {
        cin >> tmp.first >> tmp.second;
        a[tmp.first - 1].push_back(tmp.second);
    }
    int maxSize = 0;
    for (int i = 0; i < m; i++) {
        sort(a[i].begin(), a[i].end(), comp);
    }
 
    for (int i = 0; i < a.size(); i++) {
        int tmpsum = 0;
        for (int j = 0; j < a[i].size(); j++) {
            tmpsum += a[i][j];
            if (tmpsum < 0) break;
            prefixsum[j+1] += tmpsum;
        }
    }
    int ans = 0;
    for (int i = 0; i < prefixsum.size(); i++) {
        if (prefixsum[i] > ans) {
            ans = prefixsum[i];
        }
    }
    cout << ans << endl;
}
 
int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    solve();
    return 0;
}
