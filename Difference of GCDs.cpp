#include <bits/stdc++.h>

using namespace std;

#define ll long long

int a[100005];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t, n, l, r;
	cin >> t;
	while (t--) {
		cin >> n >> l >> r;
		int f = 1;
		for(int i = 1; i <= n; ++i) {
			int temp = r / i * i;
			if(temp < l){
				f = 0;
				break;
			}
		}
		if(f == 1){
			cout << "YES\n";
			for(int i = 1; i <= n; ++i){
				int temp = r / i * i;
				cout << temp << " ";
			}
			cout << "\n";
		}else{
			cout << "NO\n";
		}
	}
	
}
