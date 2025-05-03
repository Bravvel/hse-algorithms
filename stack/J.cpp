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
	deque<int> dq;
	int n, k; 
	cin >> n >> k;
	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < n; i++) {
		while (!dq.empty() && dq.front() < i - k + 1) {
			dq.pop_front();
		}
		while (!dq.empty() && a[dq.back()] >= a[i]) {
			dq.pop_back();
		}
		dq.push_back(i);
		if (i >= k - 1) {
			cout << a[dq.front()] << endl;
		}
	}
	return 0;
}