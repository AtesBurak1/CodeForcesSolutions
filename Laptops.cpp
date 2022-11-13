#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int n,a,b;
	cin >> n;
	int i=0,flag=1;
	map <int,int,less<int>> lap;
	while(n--){
		cin >> a >> b;
		lap.insert(make_pair(a,b));	
	}
	int val=0;
	for(auto it:lap){
		
		if(val>it.second){
			cout << "Happy Alex" ;
			flag=0;
			break;
		}
		val=it.second;
	}
	if(flag)
		cout << "Poor Alex";
	
	
	return 0;
}
