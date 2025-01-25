#include <iostream>
#include <algorithm>
#include <cctype>
using namespace std;
 
string s;
int cnt;
int n;
 
int main() {
	cin >> n >> s;
	for(int i = 0; i < n-1; i++){
		if(s[i] == s[i+1]) cnt++;
	}
	cout << cnt;
	return 0;
}
