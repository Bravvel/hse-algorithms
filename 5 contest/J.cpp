#include <iostream>
#include <vector>
#include <set>
 
using namespace std;
 
void solve() {
    long long l, r;
    cin >> l >> r;
    if (r / l < 2)
        cout << -1 << ' ' << -1 << endl;
    else cout << l << ' ' << l * (r / l) << endl;
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
