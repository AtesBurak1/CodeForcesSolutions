#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n,k;
  cin >> n >> k;
	if(n%2 && k%2==0)
		cout << "No" << endl;
	else if(n < k){
		cout << "No" << endl;
	}else if(n%2 && n < k){
		cout << "No" << endl;
	}else if(n==k){
	    cout << "Yes" << endl;
		for(int i=0; i < k-1; i++)
			cout << 1 << " ";
		cout << 1 << endl;    
	}else if(n%2==0 && k%2 && n/2 < k){
        	cout << "No" << endl;    
	}else if(n%2==0 && k%2 && n/2 > k){
		cout << "Yes" << endl; // n%2==0 && k%2 && n/2 < k
		for(int i=0; i < k-1; i++)
			cout << 2 << " ";
		cout << n-2*(k-1) << endl;
	}else if(n%2==0 && k%2==0){
		cout << "Yes" << endl;
		for(int i=0; i < k-1; i++)
			cout << 1 << " ";
		cout << n-(k-1) << endl;
	}else if(n%2){
		cout << "Yes" << endl;
		for(int i=0; i < k-1; i++)
			cout << 1 << " ";
		cout << n-(k-1) << endl;
	}else{
		cout << "Yes" << endl; // n%2==0 && k%2 && n/2 < k
		for(int i=0; i < k-1; i++)
			cout << 2 << " ";
		cout << n-2*(k-1) << endl;
	}
}

int main() {
  int tests;
  cin >> tests;
  while (tests-- > 0) {
    solve();
  }
  return 0;
}
