#include <iostream>
#include <algorithm>
#include <cctype>
using namespace std;
 
int a, b, cnt;
 
int main() {
	cin >> a >> b;
	while(a <= b){
		a*=3;
		b*=2;
		cnt++;
	}
	cout << cnt;
	return 0;
}
