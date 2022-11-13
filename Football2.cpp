#include <bits/stdc++.h>

using namespace std;


int main(){
	
	string s,k;
	int n;
	cin >> n;
	int temp=n;
	map <string,int> mymap;
	while(n--){
		cin >> s;
		mymap[s]++;
	}
	map <string,int>::iterator it = mymap.begin();
	if(it->second > temp/2)
		cout << it->first ;
	else{
		it++;
		cout << it->first;
	}
	
	return 0;
	
}
