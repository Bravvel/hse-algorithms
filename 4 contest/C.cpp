#include <iostream>
 
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int a[n];
        int sum = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            sum += a[i];
        }
        if (sum == x) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
            int tmp = 0;
            for (int i = 0; i < n; i++) {
                if (tmp + a[i] == x) {
                    swap(a[i], a[i+1]);
                }
                tmp += a[i];
                cout << a[i] << ' ';
            }
            cout << endl;
        }
    }
    return 0;
}
