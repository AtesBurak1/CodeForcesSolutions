#include <bits/stdc++.h>

using namespace std;


int main(){
	
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int arr[40];
		int odd=0,even=0,fals=0,ans=-1;
		for(int i=0; i < n; i++){
			cin >> arr[i];
			if(i%2){
				if(arr[i]%2){
					odd++;
				}else{
					even++;
					fals++;
				}
			}else{
				if(arr[i]%2){
					odd++;
					fals++;
				}else{
					even++;
				}
			}
		}
		if(odd != n/2 || even != n - n/2)
			cout << -1 <<'\n';
		else 
			cout << fals/2 << '\n';
	}
	
	
	
	return 0;
}
