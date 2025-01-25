#include <iostream>
#include <vector>
using namespace std;
 
int n;
string s;
 
int main() {
	int ans = 0;
	cin >> n;
	while(n--){
		cin >> s;
		if( (s[0] == '+' && s[1] == '+') || (s[1] == '+' && s[2] == '+')) ans++;
		else ans--;
	}
	cout << ans;
	return 0;
}
