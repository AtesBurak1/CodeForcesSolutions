#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		vector <int> a;
		vector <int> b;
		for(int i=0 ; i < n ; i++){
			cin >> a[i];
		}
		for(int i=0 ; i < n ; i++){
			cin >> b[i];
		}
		int j=0;
		for(int i=0; i < n; i++){
			if(a[i] <= b[j]){
				cout << b[j] - a[i] << " ";
			}else{
				j++;
			}
		}
		cout << endl;
		int j=n-1;
		for(int i=0; i < n; i++){
			if(a[i] <= b[j]){
				cout << b[j]-a[i] << " ";
			}else{
				j--;
			}
		}
		
	}
	
	
	return 0;
}
