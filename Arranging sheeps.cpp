#include <bits/stdc++.h>

using namespace std;


int main(){
	string s;
	int size,q,n;
	cin >> q;
	while(q--){
		cin >> n;
		cin >> s;
		long long count = 0, ans = 0; 
		for(int i = 0; i < s.length(); i++){
			if(s[i] == '*')
				count++;
		}
		int m =count/2, mid=-1,i;
		for(i = 0; i < s.length(); i++){
			if(s[i] == '*'){
				mid++;
				if(mid == m){
					mid = i;
					break;
				}
			}
		}
		int k=1;
		for(int j=0; j < s.length(); j++){
			if(s[j] == '*'){
				ans += abs(mid - m -j);
				mid++;
			}
		}
		cout << ans << endl;
	}
	
	
	return 0;
}
