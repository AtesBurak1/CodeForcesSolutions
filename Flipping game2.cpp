#include <bits/stdc++.h>


using namespace std;

int main(){
	
	int n;
	cin >> n;
	vector <int> arr(n,1);
	vector <int> dp(n,1);
	int cnt{0}, ans{0};
	for(int i{0}; i < n; i++){
		cin >> arr[i];
		if(arr[i])
			cnt++;
	}
	if(arr[0])
		dp[0]=0;
	ans = max(ans,dp[0]);
	for(int i{1}; i < n; i++){
		if(arr[i] )
			dp[i] = dp[i-1]-1;
		else 
			dp[i]+=dp[i-1];
		if(dp[i] < 0)
			dp[i]=0;
		ans = max(ans, dp[i]);
	}
	//cout << ans;
	if(ans == 0){
		cout << cnt-1;
	}
	else
		cout << ans + cnt;
	
	
	return 0;
}
