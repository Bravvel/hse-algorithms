#include <iostream>
 
using namespace std;
 
int main(){
    int n, k;
    cin>>n>>k;
    int a[n];
    int b[k];
    for(int i=0; i<n; i++) {
        cin >> a[i];
    }
    for(int i=0; i<k; i++) {
       cin >> b[i];
    }
    if (k > 1) cout << "Yes";
    if (k == 1) {
        for(int i=0; i<n; i++) {
            if(a[i] == 0) {
                a[i] = b[0];
                break;
            }
        }
        bool check = false;
        for(int i=0; i<n-1; i++) {
            if (a[i] > a[i+1]) {
                check = true;
                break;
            }
        }
        if(check) {
            cout<<"Yes";
        } else cout  << "No";
    }
}
