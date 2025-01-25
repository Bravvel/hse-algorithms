#include <iostream>
#include <map>
#include <algorithm>
 
using namespace std;
 
string password;
string a[101];
int n;
 
int main()
{
    cin >> password >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    bool checkFirst = false, checkSecond = false;
    for (int i = 0; i < n; i++) {
        if (a[i] == password) {
            cout << "YES";
            return 0;
        }
        if (password[0] == a[i][1]) checkFirst = true;
        if (password[1] == a[i][0]) checkSecond = true;
    }
    if (checkFirst && checkSecond) cout << "YES";
    else cout << "NO";
    return 0;
}
