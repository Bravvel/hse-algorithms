#include <iostream>
#include <algorithm>
#include <cctype>
using namespace std;
 
int a[55];
string s;
int cnt;
 
int main() {
	cin >> s;
	int n = s.size();
	for(int i = 0; i < n; i++){
		if(s[i] != '+'){
			a[cnt] = s[i] - '0';
			cnt++;
		}
	}
	
	sort(a, a+cnt);
	
	for(int i = 0; i < cnt-1; i++){
		cout << a[i] << '+';
	}
	cout << a[cnt-1];
	return 0;
}
