#include <iostream>
#include <stack>
#include <vector>
#include <queue>
 
using namespace std;
 
string s;
 
int main() {
	cin >> s;
	stack<int> st;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == '(') st.push(s[i]);
		if (s[i] == '[') st.push(s[i]);
		if (s[i] == '{') st.push(s[i]);
		if (s[i] == ')') {
			if (st.empty()) {
				cout << "no";
				return 0;
			}
			else {
				if (st.top() != '(') {
					cout << "no";
					return 0;
				}
				else {
					st.pop();
				}
			}
		}
		if (s[i] == ']') {
			if (st.empty()) {
				cout << "no";
				return 0;
			}
			else {
				if (st.top() != '[') {
					cout << "no";
					return 0;
				}
				else {
					st.pop();
				}
			}
		}
		if (s[i] == '}') {
			if (st.empty()) {
				cout << "no";
				return 0;
			}
			else {
				if (st.top() != '{') {
					cout << "no";
					return 0;
				}
				else {
					st.pop();
				}
			}
		}
	}
	if (st.empty()) {
		cout << "yes";
	}
	else {
		cout << "no";
	}
	return 0;
}