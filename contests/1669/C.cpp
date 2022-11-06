#include "bits/stdc++.h"
using namespace std;

int main() {
	int t; cin >> t;
	while(t--) {
		int n; cin >> n;
		vector<int> nums(n);
				
		int ee = 0, eo = 0, oe = 0, oo = 0;
		for(int i = 1; i < n + 1; ++i) {
			int x; cin >> x;

			if(i % 2 == 0 && x % 2 == 0) ee = 1;
			else if(i % 2 == 0 && x % 2 == 1) eo = 1;
			else if(i % 2 == 1 && x % 2 == 0) oe = 1;
			else oo = 1;
		}

		if(ee & eo || oe && oo) cout << "NO\n";
		else cout << "YES\n";
	}
	return 0;
}
