#include <bits/stdc++.h>

using namespace std;


int main(){
	
	long long int n,k;
	cin >> n >> k;
	if(k <= n - n/2){
		cout << 2*k -1;
	}else{
		cout << 2 * (k - n + n/2);
	}
	
	return 0;
	
}
