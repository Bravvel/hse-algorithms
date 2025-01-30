#include <iostream>
#include <vector>
#include <set>
 
using namespace std;
 
void solve() {
    long long x, y;
    cin >> x >> y;
    int ans = 0;
    ans = y % x;
    y -= ans;
    y /= x;
    while (y != 0) {
        ans += y % 10;
        y /= 10;
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
