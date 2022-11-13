#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	
	int t,dp[101];
	cin >> t;
	while(t--){
		int n;
		cin >> n;
			int num,flag=1;
			for(int i=0;i<n;i++){
				cin >> dp[i];
				if(dp[i]%dp[0]!=0 ){
						flag=0;
				}
				
			}
			if(flag)
				cout << "YES" << endl;
			else
				cout << "NO" << endl;
	}
	
	return 0;
	
}
	 
