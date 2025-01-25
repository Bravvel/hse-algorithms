#include <iostream>
#include <algorithm>
#include <cctype>
using namespace std;
 
string s1, s2;
 
int main() {
	cin >> s1 >> s2;
	transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
	transform(s2.begin(), s2.end(), s2.begin(), ::tolower);
	if(s1 == s2) cout << 0;
	if(s1 > s2) cout << 1;
	if(s1 < s2) cout << -1;
	return 0;
}
