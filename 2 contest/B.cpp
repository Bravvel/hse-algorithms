#include <iostream>
#include <algorithm>
#include <cctype>
using namespace std;
 
int a[55];
string s;
int cnt;
 
int main() {
	cin >> s;
	s[0] = ::toupper(s[0]);
	cout << s;
	return 0;
}
