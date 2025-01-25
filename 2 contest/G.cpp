#include <iostream>
#include <algorithm>
#include <vector>
#include <cctype>
using namespace std;
 
string s;
int cnt1, cnt0;
 
int main() {
	cin >> s;
	for(int i = 0; i < s.size(); i++){
		if(s[i] == '1'){
			cnt1++;
			if(cnt1 == 7){
				cout << "YES";
				return 0;
			}
			
		}
		else cnt1 = 0;
		if(s[i] == '0'){
			cnt0++;
			if(cnt0 == 7){
				cout << "YES";
				return 0;
			}
			
		}
		else cnt0 = 0;
		
	}
	cout << "NO";
	return 0;
}
