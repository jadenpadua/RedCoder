#include "bits/stdc++.h"
using namespace std;

int main() {
	int t; cin >> t;
	while(t--) {
		int n; cin >> n;
		vector<int> freq(n+1, 0);
		
		int res = -1;
		for(int i = 0; i < n; i++) {
			int x; cin >> x;
			if(++freq[x] >= 3) {
				res = x;
			}
		}
		cout << res << "\n";
	}
	return 0;
}
