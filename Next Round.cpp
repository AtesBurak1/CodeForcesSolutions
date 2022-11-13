#include <bits/stdc++.h>

using namespace std;


int main(){
	
	int n,k,stop=0,flag=1;
	int dp[100]={0};
	cin >> n >> k;
	for(int i=0;i<n;i++){
		cin >> dp[i];
		if(dp[i]==0 && flag){
			stop=i;
			flag=0;
		}
	}
	int i=k;
	for(;i<n;i++){
		if(dp[k-1]!=dp[i] || dp[i]==0)
			break;
	}
	if(dp[0]==0)
		cout << 0;
	else if(stop!=0 && stop <k)
		cout << stop;
	else
		cout << i;
	
	
	return 0;
}
