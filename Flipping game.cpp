#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	int n,dp[101],i=0;
	cin >> n;
	int temp=n;
	while(n--){
		cin >> dp[i++];
	}
	int max1=0,index=0,hold=0,count=0;
	for(int i=0;i<temp;i++){
		max1=0;
		for(int j=i;j<temp;j++){
			if(dp[j]==0)
			max1++;
			else{
				max1--;	
			}
			hold=max(max1,hold);
		}
		if(dp[i]==1)
			count++;
	}
	if(hold==0)
		cout << temp -1;
	else
		cout << count + hold;
	return 0;
}
