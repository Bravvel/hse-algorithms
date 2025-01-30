#include <iostream>
#include <vector>
 
using namespace std;
 
void solve() {
    long long n;
    cin >> n;
    if (n % 2 == 1) {
        cout << "YES" << endl;
    }
    else {
        while (n % 2 == 0) {
            n /= 2;
        }
        if (n != 1) {
            cout << "YES" << endl;
        }
        else cout << "NO" << endl;
    } 
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
