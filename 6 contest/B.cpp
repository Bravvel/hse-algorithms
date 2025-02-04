#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
void solve() {
    long long n, k, ans = 0;
    cin >> n >> k;
    vector<long long> a(n);
    vector<long long> tmp(n - 1);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n - 1; i++) {
        tmp[i] = a[i + 1] - a[i];
    }
    sort(tmp.begin(), tmp.end());
    for (int i = 0; i < n-k; i++) {
        ans += tmp[i];
    }
    cout << ans;
}
 
int main() {
    solve();
    return 0;
}
