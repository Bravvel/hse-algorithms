#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
vector<pair<string, int>> a;
 
int main()
{
    a.push_back(make_pair("Tetrahedron", 4));
    a.push_back(make_pair("Cube", 6));
    a.push_back(make_pair("Octahedron", 8));
    a.push_back(make_pair("Dodecahedron", 12));
    a.push_back(make_pair("Icosahedron", 20));
    int n, ans = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        for (int i = 0; i < a.size(); i++) {
            if (s == a[i].first) ans += a[i].second;
        }
    }
    cout << ans;
    return 0;
}
