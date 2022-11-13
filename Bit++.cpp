#include <bits/stdc++.h>

using namespace std;


int main(){
	
	int count=0,n;
	string s;
	cin >> n;
	while(n--){
		cin >> s;
		if(s[1]=='-')
			count--;
		else
			count++;
	}
	cout << count;
	
	return 0;
}
