#include <bits/stdc++.h>


using namespace std;



int main(){
	
	int t;
	cin >> t;
	while(t--){
		double ang;
		cin >> ang;
		double n = 360 / (180 - ang);
		int k=n;
		if(n == k)
			cout << "YES" << '\n';
		else
			cout << "NO" << '\n';
	}
	
	return 0;
}
