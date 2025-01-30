#include <iostream>
#include <vector>
#include <set>
 
using namespace std;
 
void solve() {
    int a, b;
    cin >> a >> b;
    int n = (b & a);
    cout << (a ^ n) + (b ^ n) << endl;
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
