#include <iostream>
#include <algorithm>
#include <iomanip>
#include <cctype>
using namespace std;
 
int n;
int check[26];
string s;
 
int main() {
	cin >> n >> s;
	if(n < 26){
		cout << "NO";
		return 0;
	}
	transform(s.begin(), s.end(), s.begin(), ::toupper);
	for(int i = 0; i < n; i++){
		check[s[i] - '0' - 17]++;
	}
	for(int i = 0; i < 26; i++){
		if(check[i] == 0) {
			cout << "NO";
			return 0;
		}
	}
	cout << "YES";
	return 0;
}
