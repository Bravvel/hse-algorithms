#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
 
using namespace std;
 
bool comp(int a, int b) {
    return a > b;
}
 
void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> cnt(n+1);
    set<int> s;
    int answer = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        cnt[a[i]]++;
    }
    sort(cnt.begin(), cnt.end(), comp);
    int tmp = 1;
    int lastInsert = cnt[0];
    for (int i = 0; i < 200001; i++) {
        if (cnt[i] == 0) break;
        if (i == 0) {
            answer += cnt[i];
            lastInsert = cnt[i];
            continue;
        }
        if (cnt[i] >= lastInsert) {
            lastInsert--;
            if (lastInsert == 0) break;
            answer += lastInsert;
        }
        else {
            answer += cnt[i];
            lastInsert = cnt[i];
        }
        
    }
    cout << answer << endl;
}
 
int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int q;
    cin >> q;
    while (q--) {
        solve();
    }
    return 0;
}
