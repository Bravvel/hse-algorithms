#include <iostream>
#include <vector>
#include <set>
 
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            cout << a[i + 1]*(-1) << ' ';
        }
        else cout << a[i - 1] << ' ';
    }
    cout << endl;
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
