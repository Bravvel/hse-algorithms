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
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int S = 0, D = 0;
    int l = 0, r = n-1;
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            if (a[l] > a[r]) {
                S += a[l];
                l++;
            } else {
                S += a[r];
                r--;
            }
        }
        if (i % 2 == 1) {
            if (a[l] > a[r]) {
                D += a[l];
                l++;
            } else {
                D += a[r];
                r--;
            }
        }
    }
    cout << S << ' ' << D << endl;
}
 
int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    solve();
    return 0;
}
