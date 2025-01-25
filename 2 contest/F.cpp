#include <iostream>
#include <algorithm>
#include <vector>
#include <cctype>
using namespace std;
 
int n;
 
int main() {
	cin >> n;
	vector<vector<int>> a(n, vector<int>(3));
	for(int i = 0; i < n; i++){
		for(int j = 0; j < 3; j++){
			cin >> a[i][j];
		}
	}
	for(int i = 1; i < n; i++){
		for(int j = 0; j < 3; j++){
			a[i][j] += a[i-1][j];
		}
	}
	if (a[n-1][0] != 0 || a[n-1][1] != 0 || a[n-1][2] != 0) cout << "NO";
	else cout << "YES";
	return 0;
}
