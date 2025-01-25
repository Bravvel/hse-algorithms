#include <iostream>
#include <algorithm>
#include <cctype>
#include <string>
 
using namespace std;
 
string s;
 
int main() {
	int t;
	cin >> t;
	while(t--){
		cin >> s;
		int n = s.size() / 2 + 1;
		char ans[n];
		ans[0] = s[0];
		ans[1] = s[1];
		int cnt = 2;
		for(int i = 2; i < s.size(); i++){
			if(i % 2 != 0){ 
				ans[cnt] = s[i];
				cnt++;
			}
		}
		for(int i = 0; i < n; i++){
			cout << ans[i];
		}
		cout << endl;
	}
}
