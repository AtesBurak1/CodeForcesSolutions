#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int n,m;
	cin >> n >> m;
	int ans = 0;
	while(n != m){
		if(m < n){
			ans += n-m;
			break;
		}
		if(m % 2 == 0){
			m /= 2;
			ans++;
		}
		else{
			m++;
			ans++;
		}
	}
	cout << ans;
	return 0;
}
