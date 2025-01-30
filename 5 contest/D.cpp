#include <iostream>
#include <vector>
#include <set>
 
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    vector<double> a(n);
    set<double> st;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - 1; j++) {
            if (i == j) continue;
            st.insert(abs((a[j] - a[i])/2));
        }
    }
    cout << st.size() << endl;
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
