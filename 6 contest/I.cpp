#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <cmath>
 
using namespace std;
 
bool comp(int a, int b) {
    return a > b;
}
 
void solve() {
    long long n;
    cin >> n;
    vector<long long> a(n);
    vector<long long> b(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }
    
    sort(a.begin(), a.end(), comp);
    sort(b.begin(), b.end(), comp);
    long long indexA = 0, indexB = 0, bank = 0;
    for (int i = 0; i < 2*n; i++) {
        if (i % 2 == 0) {
            if (indexA == n) {
                indexB++;
                continue;
            }
            if (indexB == n) {
                bank += a[indexA];
                indexA++;
                continue;
            }
            if (a[indexA] > b[indexB]) {
                bank += a[indexA];
                indexA++;
            }
            else {
                indexB++;
            }
        }
        else {
            if (indexB == n) {
                indexA++;
                continue;
            }
            if (indexA == n) {
                bank -= b[indexB];
                indexB++;
                continue;
            }
            if (b[indexB] > a[indexA]) {
                bank -= b[indexB];
                indexB++;
            }
            else {
                indexA++;
            }
        }
    }
    cout << bank;
}
 
int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    solve();
    return 0;
}
