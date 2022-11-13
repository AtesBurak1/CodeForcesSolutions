#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		string s;
		cin >> n;
		cin >> s;
		long long ans=0;
		int full=0;
		for(int i=0; i<n;i++){
			if(s[i]=='L')
				ans+= i;
			else
				ans+= n-i-1;
		}
		int st=0,en=n-1,count=0;
		int f=1;
		while(st <= en){
			if(f){
				if(s[st]=='L'){
					ans -= st;
					ans += n-st-1;
					cout << ans << " ";
					count++;
				}
				st++;
				f=0;
			}else{
				if(s[en]=='R'){
					ans-= n-en-1;
					ans+= en;
					cout << ans << " ";
					count++;
				}
				en--;
				f=1;
			}
		}
		while(count < n){
			cout << ans << " " ;
			count++;
		}
		cout << endl;
			
	}
	
	
	return 0;
}
