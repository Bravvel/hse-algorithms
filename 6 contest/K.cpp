#include <iostream>
#include <vector>
#include <algorithm>
 
typedef long long ll;
 
using namespace std;
 
bool comp(ll a, ll b) {
    return a > b;
}
 
void solve() {
    int n, k;
    ll ans = 0;
    cin >> n >> k;
    vector<ll> a(n);
    vector<ll> suffix(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    suffix[n-1] = a[n-1];
    for (int i = n-2; i >= 0; i--) {
        suffix[i] = suffix[i+1] + a[i];
    }
    if (k == 1) {
        ans = suffix[0];
    } else {
        ans += suffix[0];
        suffix[0] = LLONG_MIN;
        sort(suffix.begin(), suffix.end(), comp);
        for (int i = 0; i < k-1; i++) {
            ans += suffix[i];
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
