#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <cmath>
 
using namespace std;
 
 
void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    int cnt = 0;
    int cnteq = 1;
    for (int i = 0; i < n - 1; i++) {
        if (a[i + 1] <= (a[i] + k) && (a[i+1] != a[i])) {
            cnt += cnteq;
            cnteq = 1;
        }
        if (a[i + 1] == a[i]) {
            cnteq++;
        }
        else {
            cnteq = 1;
        }
    }
    cout << n - cnt;
}
 
int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    solve();
    return 0;
}
