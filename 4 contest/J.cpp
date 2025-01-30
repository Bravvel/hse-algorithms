#include <iostream>
#include <vector>
 
using namespace std;
 
void solve() {
    int n, ans = 0;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] == 1) ans++;
        if (a[i] == 3) ans++;
    }
    cout << ans << endl;
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
