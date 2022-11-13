#include <bits/stdc++.h>

using namespace std;

int main(){
	
	vector <int> lantern;
	int n,l;
	cin >> n >> l;
	lantern.push_back(0);
	lantern.push_back(l);
	while(n--){
		int num;
		cin >> num;
		lantern.push_back(num);
	}
	sort(lantern.begin(),lantern.end());
	double min=0.0;
	for(int i=1;i<lantern.size();i++){
		double sum=(double)(lantern[i]-lantern[i-1])/2;
		min=max(sum,min);
	}
	double sum=lantern[1]-lantern[0];
	min=max(sum,min);
	sum=lantern[lantern.size()-1]-lantern[lantern.size()-2];
	min=max(sum,min);
	printf("%.10f",min);
}
