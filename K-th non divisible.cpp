#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	
	int t;
	cin >> t;
	while(t--){
		int n,k;
		cin >> n >> k;
		int ans;
		ans=k/(n-1)*n + k%(n-1);
		if(k%(n-1)==0)
			ans-=1;
		cout << ans << endl;
	}
	
	
	return 0;
}
