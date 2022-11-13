#include <bits/stdc++.h>


using namespace std;



int main(){
	
	int t;
	cin >> t;
	int odd=0,even=0,lo=0,le=0,i=0;
	while(t--){
		int ang;
		cin >> ang;
		if(ang%2){
			odd++;
			lo=i;
		}else{
			even++;
			le=i;
		}
		i++;
		
	}
	if(odd==1)
		cout << lo+1;
	else
		cout << le+1;
	
	return 0;
}
