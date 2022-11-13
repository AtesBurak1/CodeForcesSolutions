#include <bits/stdc++.h>

using namespace std;


int main(){
	
	int q,solve=0;
	cin >> q;
	while(q--){
		int n,count=0;
		for(int i=0;i<3;i++){
			cin >> n;
			if(n==1)
				count++;
		}
		if(count>=2)
			solve++;
	}
	cout << solve;
	
	
	
	return 0;
}
