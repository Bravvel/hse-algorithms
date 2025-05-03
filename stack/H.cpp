#include <iostream>
#include <stack>
#include <vector>
#include <queue>
#include <string>
 
using namespace std;
 
string s;
 
int main() {
	getline(cin, s);
	stack<int> st;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == ' ') {
			continue;
		}
		if ((9 >= s[i] - '0') && (s[i] - '0') >= 0) {
			st.push((s[i] - '0'));
		}
		if (s[i] == '+') {
			int a = st.top();
			st.pop();
			int b = st.top();
			st.pop();
			st.push(a + b);
		}
		if (s[i] == '-') {
			int a = st.top();
			st.pop();
			int b = st.top();
			st.pop();
			st.push(b - a);
		}
		if (s[i] == '*') {
			int a = st.top();
			st.pop();
			int b = st.top();
			st.pop();
			st.push(a * b);
		}
	}
	cout << st.top();
	return 0;
}