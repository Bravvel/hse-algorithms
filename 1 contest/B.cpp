#include <iostream>
using namespace std;
 
int T;
string s;
 
int main() {
	cin >> T;
	while(T--){
		cin >> s;
		int n = s.size();
		if (n > 10){
			cout << s[0] << n-2 << s[n-1] << endl;
		} else cout << s << endl;
		
	}
	return 0;
}
