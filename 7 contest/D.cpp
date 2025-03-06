#include <iostream>
#include <vector>
#include <algorithm>
 
 
typedef long long ll;
 
using namespace std;
 
bool comp(ll a, ll b) {
    return a > b;
}
 
pair<bool, int> check(string s, int (&letters)[26]) {
    for (int i = 0; i < 26; i++) {
        letters[i] = 0;
    }
    int cntQ = 0;
    for (int i = 0; i < s.length(); i++) {
        letters[s[i] - 'A']++;
    }
    for (int i = 0; i < 26; i++) {
        if (letters[i] > 1) {
            return make_pair(false, 0);
        }
        if (s[i] == '?') {
            cntQ++;
        }
    }
    return make_pair(true, cntQ);
}
 
void build_string(string& s, int indexS, int (&letters)[26]) {
    int indexL = 0;
    string tmp = "";
    for (int i = 0; i < 26; i++) {
        if (letters[i] == 0) {
            tmp += char(i + 'A');
        }
    }
    // cout << tmp << endl;
    // cout << s << endl;
    // cout << indexS << endl;
    for (int i = indexS; i < indexS + 26; i++) {
        if (s[i] == '?') {
            // cout << 1;
            s[i] = tmp[indexL];
            indexL++;
        }
    }
    // cout << endl;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '?') {
            s[i] = 'A';
        }
    }
}
 
void solve() {
    int letters[26] = {0};
    string s;
    cin >> s;
    if (s.length() < 26) {
        cout << -1;
        return;
    }
    int n = s.length();
    for (int i = 0; i < n-25; i++) {
        string t = s.substr(i, 26);
        pair<bool, int> p = check(t,letters);
        if (p.first) {
            if (p.second == 0) {
                for (int k = 0; k < s.length(); k++) {
                    if (s[k] == '?') s[k] = 'A';
                }
                cout << s;
                return;
            }
            else {
                int cnt = 0;
                for (int k = 0; k < 26; k++) {
                    if (letters[k] == 0) {
                        cnt++;
                    }
                }
                // cout << t << ' ' << cnt  << ' ' << p.second << endl;
 
                if (p.second <= cnt) {
                    build_string(s, i, letters);
                    cout << s;
                    return;
                }
            }
        }
    }
    cout << -1;
}
 
int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    solve();
    return 0;
}
