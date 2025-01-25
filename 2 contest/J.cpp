#include <iostream>
#include <algorithm>
#include <cctype>
#include <string>
 
using namespace std;
 
string s;
int cntBig, cntSmall;
 
int main() {
	cin >> s;
	for(int i = 0; i < s.size(); i++){
		if(std::isupper(s[i])) cntBig++;
		if(std::islower(s[i])) cntSmall++;
	}
	if(cntSmall >= cntBig){
		transform(s.begin(), s.end(), s.begin(), ::tolower);
		cout << s;
	} else{
		transform(s.begin(), s.end(), s.begin(), ::toupper);
		cout << s;
	}
	return 0;
}
