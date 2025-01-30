#include <iostream>
 
using namespace std;
 
int main(){
    int T;
    cin >> T;
    while (T--){
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        if (k * 2 == n){
            cout << "NO" << endl;
            continue;
        }
        bool check = false;
        for (int i = 0; i < k; i++)
            if (s[i] != s[n-i-1]){
                cout << "NO" << endl;
                check = true;
                break;
            }
        if (!check) cout << "YES" << endl;
    }
}
