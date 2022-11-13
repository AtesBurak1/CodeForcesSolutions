#include <bits/stdc++.h>

using namespace std;


int main(){
	
	string s;
	cin >> s;
	int max_0 =0, max_1=0,temp_0=0,temp_1=0;
	for(int i=0; i < s.length(); i++){
		if(s[i]=='1'){
			max_0=max(max_0,temp_0);
			temp_0=0;
			temp_1++;
		}else{
			max_1=max(max_1,temp_1);
			temp_1=0;
			temp_0++;
		}
	}
	max_1=max(max_1,temp_1);
	max_0=max(max_0,temp_0);
	if(max_0 >= 7 || max_1 >= 7)
		cout << "YES";
	else
		cout << "NO";
	
	return 0;
}
