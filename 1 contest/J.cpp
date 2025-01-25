#include <iostream>
#include <algorithm>
#include <cctype>
using namespace std;
 
char g[12] = {'A', 'O', 'Y', 'E', 'U', 'I', 'a', 'o', 'y', 'e', 'u', 'i'};
string s;
bool flag = false;
 
int main() {
	cin >> s;
	int n = s.size();
	for(int i = 0; i < n; i++){
		flag = false;
		for(int j = 0; j < 12; j++){
			if(s[i] == g[j]) flag = true;
		}
		if(!flag){
			cout << '.' << char(::tolower(s[i]));
		}
	}
	return 0;
}
