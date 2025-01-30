#include <iostream>
#include <vector>
 
using namespace std;
 
int main()
{
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            a[i] = i + 1;
        };
        cout << n << endl;
        for (int i = 0; i < n; i++) {
            cout << i + 1 << ' ';
        }
        cout << endl;
    }
    return 0;
}
