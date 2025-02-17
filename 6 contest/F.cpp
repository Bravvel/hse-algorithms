#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <cmath>
 
using namespace std;
 
void solve() {
    long long n, m;
    long long sum = 0;
    cin >> n >> m;
    vector<long long> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
    }
    if (n == 1) {
        cout << 0;
    }
    else {
        sort(a.begin(), a.end());
        long long level = 1;
        long long tmp = 1;
        for (int i = 1; i < n; i++) {
            if (a[i] > level) {
                level++;
                tmp++;
            }
            else {
                tmp++;
            }
            if (i == n - 1) {
                tmp += a[i] - level;
            }
        }
        cout << sum - tmp;
    }
}
 
int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    solve();
    return 0;
}
