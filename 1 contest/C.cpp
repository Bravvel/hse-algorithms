#include <iostream>
using namespace std;
 
long long n,m,a, ans_l, ans_w;
 
int main() {
	cin >> n >> m >> a;
	if(n % a == 0){
		ans_l = n/a; 
	} else ans_l = n/a + 1;
	if(m % a == 0){
		ans_w = m/a; 
	} else ans_w = m/a + 1;
	cout << ans_l * ans_w;
	return 0;
}
