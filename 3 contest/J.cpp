#include <iostream>
 
using namespace std;
 
int main() {
    int n;
    string s;
    cin >> n >> s;
    int cnt = 0;
    while (s.find("xxx") != string::npos) {
        s.erase(s.find("xxx"), 1);
        cnt++;
    }
    cout << cnt << endl;
    return 0;
}
