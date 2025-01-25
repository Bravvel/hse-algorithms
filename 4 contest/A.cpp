#include <iostream>
 
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int cnt0 = 0;
        int cnt1 = 0;
        int zeroInLine = 0;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '0') {cnt0++;}
            if (s[i] == '1') {cnt1++;}
        }
        if (cnt0 == s.length()) {
            cout << 1 << endl;
            continue;
        }
        if (cnt1 == s.length()) {
            cout << 0 << endl;
            continue;
        }
        bool check = false;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '0') {
                zeroInLine++;
                if (zeroInLine == cnt0) {
                    check = true;
                    break;
                }
            } else zeroInLine = 0;
        }
        if (check) {
            cout << 1 << endl;
        } else cout << 2 << endl;
    }
    return 0;
}
