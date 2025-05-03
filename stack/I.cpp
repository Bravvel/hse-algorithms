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
	deque<int> left, right;
	int N;
	cin >> N;
	int index;
	char s;
	for (int i = 0; i < N; i++) {
		cin >> s;
		if (s == '-') {
			cout << left.front() << endl;
			left.pop_front();
		}
		if (s == '+') {
			cin >> index;
			right.push_back(index);
		}
		if (s == '*') {
			cin >> index;
			left.push_back(index);
		}
		if (left.size() < right.size()) {
			left.push_back(right.front());
			right.pop_front();
		}
		else if (left.size() > right.size() + 1) {
			right.push_front(left.back());
			left.pop_back();
		}
	}
	return 0;
}