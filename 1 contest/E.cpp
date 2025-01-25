#include <iostream>
#include <vector>
using namespace std;
 
int n, k, ans;
 
int main() {
	cin >> n >> k;
	k--;
	vector<int> a(n);
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	for(int i = 0; i < n; i++){
		if(a[i] >= a[k] && a[i] > 0) ans++;
		else break;
	}
	cout << ans;
	return 0;
}
