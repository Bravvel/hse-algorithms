#include <iostream>
#include <map>
#include <algorithm>
 
using namespace std;
 
int t, n;
string s;
string a[51];
 
int main()
{
    cin >> t;
    while (t--) {
        cin >> n >> s;
        string ans(n, '1');
        for (int i = 0; i < n; i++) {
            a[i] = s.substr(i, n);
        }
        for (int i = 0; i < n; i++) {
            int cnt = 0;
            for (int j = 0; j < n; j++) {
                if (a[i][j] == '0') cnt++;
            }
            if (cnt == n) ans[i] = '0'; 
        }
        cout << ans << endl;
    }
    return 0;
}
