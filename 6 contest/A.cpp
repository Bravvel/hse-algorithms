#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
void solve() {
    long long n, k;
    cin >> n >> k;
    vector<long long> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    int mid = n / 2;
    long long cnt = 1;
    for (int i = mid + 1; i < n; i++) {
        if (a[i] == a[mid]) cnt++;
        else {
            if (k - (a[i] - a[mid]) * cnt >= 0) {
                k -= (a[i] - a[mid]) * cnt;
                a[mid] = a[i];
                cnt++;
            }
        }
    }
    if (k != 0) {
        a[mid] += k / cnt;
    }
    cout << a[mid];
}
 
int main() {
    solve();
    return 0;
}
