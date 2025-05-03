#include <iostream>
#include <stack>
#include <vector>
#include <queue>
#include <string>
#include <deque>
 
using namespace std;
 
int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	int n;
	cin >> n;
	vector<int> a(n);
	stack<int> st;
	stack<int> ans;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	st.push(a[0]);
	ans.push(1);
	cout << -1 << endl;
	for (int i = 1; i < n; i++) {
		while (!st.empty() && st.top() <= a[i]) {
			st.pop();
			ans.pop();
		}
		if (ans.empty()) {
			cout << -1 << endl;
		}
		else {
			cout << ans.top() << endl;
		}
		st.push(a[i]);
		ans.push(i + 1);
	}
	return 0;
}