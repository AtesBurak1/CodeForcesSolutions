#include <bits/stdc++.h>

using namespace std;


int main(){
	
	int q;
	cin >> q;
	while(q--){
		int n,h,x,i=0;
		cin >> n >> x;
		vector <int> vec;
		for(int i=0;i<2*n;i++){
			cin >> h;
			vec.push_back(h);
		}
		sort(vec.begin(),vec.end());
		int flag=1;
		for(int i=0;i<n;i++){
			if(vec[n+i]-vec[i]<x){
				cout << "No" << endl;
				flag=0;
				break;
			}
		}
		if(flag)
			cout << "Yes"<< endl;
			
	}
	return 0;
}
