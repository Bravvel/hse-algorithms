#include <iostream>
#include <algorithm>
#include <cctype>
using namespace std;
 
string s;
int a[26];
int cnt;
 
int main() {
	cin >> s;
	for(int i = 0; i < s.size(); i++){
		a[s[i] - '0' - 49]++;
	}
	for(int i = 0; i < 26; i++){
		if(a[i] > 0) cnt++;
	}
	if(cnt % 2 == 0) cout << "CHAT WITH HER!";
	else cout << "IGNORE HIM!";
	return 0;
}
