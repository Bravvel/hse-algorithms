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
    cin >> n;
    vector<ll> a(n);
    int ans = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int m;
    cin >> m;
    vector<ll> b(m);
    for (int i = 0; i < m; i++) {
        cin >> b[i];
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    int indexA = 0, indexB = 0;
    while ( (indexA < n) && (indexB < m) ) {
        if ( abs(a[indexA] - b[indexB]) <= 1) {
            indexA++;
            indexB++;
            ans++;
        }
        if (b[indexB] - a[indexA] > 1) {
            indexA++;
        }
        if (a[indexA] - b[indexB] > 1) {
            indexB++;
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
