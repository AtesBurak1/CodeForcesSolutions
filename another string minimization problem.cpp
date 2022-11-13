#include <bits/stdc++.h>

using namespace std;
void solve(vector <int> nums,int n,int m){
	int str[50]={0};
	for(int i=0;i<nums.size();i++){
		int index=nums[i];
		int is;
		if(m-index+1<=m)
			is=m-index+1;
		if(index < is && str[index-1]==0)
			str[index-1]=1;
		else if(str[is-1]==0)
			str[is-1]=1;
		else 
			str[index-1]=1;
	}
	for(int i=0;i<m;i++){
		if(str[i]==1)
			cout << "A";
		else
			cout << "B";
	}
	cout << endl;
}
int main(){
	
	int n,r;
	vector <int> nums;
	cin >> n;
	while(n--){
		int k,l;
		cin >> k >> l;
		nums.clear();
		while(k--){
			cin >> r;
			nums.push_back(r);
		}
		solve(nums,k,l);
	}
	
	return 0;
}
