#include <iostream>
#include <stack>
#include <vector>
 
using namespace std;
 
string s;
int a[1000000];
int b[1000000];
 
int main() {
	cin >> s;
	for (int i = 0; i < s.size(); i++) {
		a[i] = -1;
		b[i] = -1;
	}
	stack<int> st;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == '(') st.push(i);
		else {
			if(!st.empty()){
				a[i] = st.top();
				st.pop();
				b[i] = a[i];
				if (s[a[i] - 1] == ')' && b[a[i] - 1] != -1) {
					b[i] = b[a[i] - 1];
				}
			}
		}
	}
 
	int maxLen = 0;
	for (int i = 0; i < s.size(); i++) {
		if (b[i] != -1) {
			maxLen = max(maxLen, i - b[i] + 1);
		}
	}
 
	int cnt = 0;
	for (int i = 0; i < s.size(); i++) {
		if (b[i] != -1 && i - b[i] + 1 == maxLen) {
			cnt++;
		}
	}
	if (maxLen == 0) {
		cout << 0 << ' ' << 1;
		return 0;
	}
	cout << maxLen << ' ' << cnt;
	return 0;
}
