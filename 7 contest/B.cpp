#include <iostream>
#include <vector>
#include <algorithm>
 
typedef long long ll;
 
using namespace std;
 
bool comp(ll a, ll b) {
    return a > b;
}
 
void solve() {
    int n;
    ll d;
    cin >> n >> d;
    vector<pair<ll, ll>> a(n);
    vector<ll> tmp(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i].first >> a[i].second;
    }
    sort(a.begin(), a.end());
    int l = 0, r = 0;
    int cnt = 0;
    while (r < n) {
        if ((a[r].first - a[l].first) < d) {
            tmp[cnt] += a[r].second;
            r++;
        } else {
            l++;
            cnt++;
            tmp[cnt] += tmp[cnt-1] - a[l-1].second;
        }
    }
    sort(tmp.begin(), tmp.end(), comp);
    cout << tmp[0] << endl;
}
 
int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    solve();
    return 0;
}
