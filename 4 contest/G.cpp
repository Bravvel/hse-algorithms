#include <iostream>
 
using namespace std;
 
int main()
{
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        string base;
        base.resize(2 * n);
        for (int i = 0; i < n; i++) {
            base[i] = '(';
            base[2 * n - i - 1] = ')';
        }
        cout << base << endl;
        for (int i = 1; i < n; i++) {
            string s = base;
            s[i] = ')';
            s[2 * n - i - 1] = '(';
            cout << s << endl;
        }
    }
    return 0;
}
