#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <cmath>
typedef long long ll;
 
using namespace std;
 
void solve() {
    int n, m;
    cin >> n >> m;
    vector<vector<ll>> A(n, vector<ll>(m));
    vector<vector<ll>> B(n, vector<ll>(m));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> A[i][j];
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> B[i][j];
        }
    }
    for (int i = n - 1; i >= 0; i--) {
        int row = i; int col = 0;
        multiset<ll> Aset;
        multiset<ll> Bset;
        while (row >= 0 && col < m) {
            Aset.insert(A[row][col]);
            Bset.insert(B[row][col]);
            row--;
            col++;
        }
        if (Aset != Bset) {
            cout << "NO" << endl;
            return;
        }
    }
    for (int i = 1; i < m; i++) {
        int row = n-1; int col = i;
        multiset<ll> Aset;
        multiset<ll> Bset;
        while (row >= 0 && col < m) {
            Aset.insert(A[row][col]);
            Bset.insert(B[row][col]);
            row--;
            col++;
        }
        if (Aset != Bset) {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
}
 
int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    solve();
    return 0;
}
