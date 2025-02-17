#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <cmath>
 
using namespace std;
 
void solve() {
    long long n, k;
    cin >> n >> k;
    vector<long long> a(n);
    vector<long long> weight;
    vector<long long> balance(n);
    long long tmp = 0;
    int ans = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        if (a[i] % 2 == 0) {
            balance[i] = tmp - 1;
            tmp = balance[i];
        }
        else {
            balance[i] = tmp + 1;
            tmp = balance[i];
        }
    }
    int flag = 0; 
    if (balance[0] == 1) { 
        flag = 1; 
    }
    else { 
        flag = -1; 
    }
    for (int i = 1; i < n - 1; i++) {
        if (flag == 0) {
            if (balance[i] == 1) {
                flag = 1;
            }
            else {
                flag = -1;
            }
            continue;
        }
        if (flag == 1) {
            if (balance[i] == 0) {
                weight.push_back(abs(a[i] - a[i+1]));
                flag = 0;
            }
        }
        if (flag == -1) {
            if (balance[i] == 0) {
                weight.push_back(abs(a[i] - a[i+1]));
                flag = 0;
            }
        }
    }
    sort(weight.begin(), weight.end());
    for (int i = 0; i < weight.size(); i++) {
        if ((k - weight[i] >= 0)) {
            ans++;
            k -= weight[i];
        }
        else break;
    }
    cout << ans;
}
 
int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    solve();
    return 0;
}
