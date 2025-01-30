#include <iostream>
#include <vector>
#include <set>
 
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    vector <long long> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    bool check = true;
    if ((a[0] >= a[1] + a[n-1]) || (a[1] >= a[0] + a[n-1]) || (a[n-1] >= a[1] + a[0])) {
        cout << 1 << ' ' << 2 << ' ' << n << endl;
        check = false;
    }
 
    if (check) cout << -1 << endl;
}
 
int main()
{
    int T;
    cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}
