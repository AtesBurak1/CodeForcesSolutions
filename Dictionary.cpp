#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int n,dp[650];
	cin >> n;
	while(n--){
		string st;
		cin >> st;
		if(st[1]>st[0])
			cout << (st[0]-'a')*25 + (st[1]-'a')<< endl;
		else
			cout << (st[0]-'a')*25 + (st[1]-'a'+1)<< endl;
	}
	
	return 0;
}
