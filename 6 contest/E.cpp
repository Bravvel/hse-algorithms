#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    bool flag1 = false;
    bool flag2 = false;
    vector<long long> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] % 2 == 1) flag1 = true;
        if (a[i] % 2 == 0) flag2 = true;
    }
    if (flag1 && flag2) {
        sort(a.begin(), a.end());
    } 
    for (int i = 0; i < n; i++) {
        cout << a[i] << ' ';
    }
}
 
int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    solve();
    return 0;
}
