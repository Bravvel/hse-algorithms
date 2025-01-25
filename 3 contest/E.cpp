#include <iostream>
using namespace std;
 
int check1[26];
int check2[26];
string s1, s2, s3;
 
int main() {
	cin >> s1 >> s2 >> s3;
	for(int i = 0; i < s1.size(); i++){
		check1[(int)(s1[i] - '0' - 17)]++;
	}
	for(int i = 0; i < s2.size(); i++){
		check1[(int)(s2[i] - '0' - 17)]++;
	}
	for(int i = 0; i < s3.size(); i++){
		check2[(int)(s3[i] - '0' - 17)]++;
	}
	for(int i = 0; i < 26; i++){
		if(check1[i] != check2[i]){
			cout << "NO";
			return 0;
		}
	}
	cout << "YES";	
	return 0;
}
