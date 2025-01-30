#include <iostream>
#include <vector>
 
using namespace std;
 
void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int pointer = 0;
    int cnt = 0;
    while (true) {
        if (a[pointer] == 0) pointer++;
        if (pointer == n - 1) break;
        while (a[pointer] > 0) {
            a[pointer]--;
            a[n - 1]++;
            cnt++;
            if (cnt == k) break;
        }
        if (cnt == k) break;
    }
    for (int i = 0; i < n; i++) {
        cout << a[i] << ' ';
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
