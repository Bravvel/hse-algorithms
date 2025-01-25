#include <iostream>
#include <map>
#include <algorithm>
 
using namespace std;
 
map<string, int> a;
int n;
string s;
 
int main()
{
    string ans;
    int max_v = -1;
    cin >> n >> s;
    for (int i = 0; i < n - 1; i++) {
        if (a.count(s.substr(i, 2))) {
            a[s.substr(i, 2)]++;
        } else a.insert(make_pair(s.substr(i, 2), 1));
    }
    for (auto& p : a) {
        if (p.second > max_v) { 
            ans = p.first;
            max_v = p.second;
        }
    }
    cout << ans;
    return 0;
}
