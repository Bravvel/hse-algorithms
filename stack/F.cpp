#include <iostream>
#include <stack>
#include <vector>
#include <queue>
 
using namespace std;
 
int ar[5];
int br[5];
 
int main() {
	int a, b;
	for (int i = 0; i < 5; i++) {
		cin >> ar[i];
	}
	for (int i = 0; i < 5; i++) {
		cin >> br[i];
	}
	queue<int> sta;
	queue<int> stb;
	for (int i = 0; i < 5; i++) {
		sta.push(ar[i]);
		stb.push(br[i]);
	}
	int cnt = 0;
	while (!stb.empty() && !sta.empty()) {
		if (cnt >= 1000000) {
			cout << "botva";
			return 0;
		}
		cnt++;
		a = sta.front();
		b = stb.front();
		sta.pop();
		stb.pop();
		if ((a == 0 && b == 9) || (a > b && !(a == 9 && b == 0))) {
			sta.push(a);
			sta.push(b);
		}
		else {
			stb.push(a);
			stb.push(b);
		}
	}
	if (sta.empty()) {
		cout << "second " << cnt;
	}
	else {
		cout << "first " << cnt;
	}
	return 0;
}