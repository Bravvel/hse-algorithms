#include <iostream>
#include <vector>
#include <set>
 
using namespace std;
 
void solve() {
    string s;
    cin >> s;
    int k = 0;
    if (s.size() == 1) k = 1;
    if (s.size() == 2) k = 3;
    if (s.size() == 3) k = 6;
    if (s.size() == 4) k = 10;
    cout << (s[0] - '0' - 1) * 10 + k << endl;
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
