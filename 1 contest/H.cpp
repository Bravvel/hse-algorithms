#include <iostream>
#include <vector>
using namespace std;
 
vector<vector<int>> a(5, vector<int>(5));
 
int main() {
	int index1, index2 = 0;
	for(int i = 0; i < 5; i++){
		for(int j = 0; j < 5; j++){
			cin >> a[i][j];
			if(a[i][j] == 1){
				index1 = i;
				index2 = j;
			}
		}
	}
	cout << abs(index1 - 2) + abs(index2 - 2);
	return 0;
}
