#include <iostream>
#include <algorithm>
#include <cctype>
#include <string>
#include <cmath>
 
using namespace std;
 
long long stupid_pow(int a){
	long long d = 1;
	for(int i = 0; i < a; i++){
		d *= 10;
	}
	return d;
}
 
long long n;
const long long l = 2050;
 
int t;
 
int main() {
	cin >> t;
	while(t--){
		cin >> n;
		if(n % l == 0){
			long long k = n / l;
			int cnt = 0;
			while(k > 0){
				k -= stupid_pow((int)floor(log10(k)));
				cnt++;
			}
			cout << cnt << endl;
		} else cout << -1 << endl; 
	}
	return 0;
}
