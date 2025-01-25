#include <iostream>
#include <vector>
using namespace std;
 
int n, cnt, ans;
 
int main() {
	cin >> n;
	vector<vector<int>> a(n, vector<int>(3));
	for(int i = 0; i < n; i++){
		for(int j = 0; j < 3; j++){
			cin >> a[i][j];
			if(a[i][j] == 1) cnt++;
		}
		if(cnt > 1) ans++;
		cnt = 0;
	}
	cout << ans;
	return 0;
}
