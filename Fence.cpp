#include <bits/stdc++.h>


using namespace std;



int main(){
	
	map <int,int> a;
	vector <int> p;
	int n,k,j=0;
	cin >> n >> k;
	for(int i=0; i < n; i++){
	    int num;
	    cin >> num;
		p.push_back(num);
		if(i < k){
			a[j]+=p[i];
		}else{
			j++;
			a[j] = a[j-1] - p[i-k] + p[i];
		}
	}	
	map <int,int>::iterator it=a.begin();
	int min1=it->second;
	for(int i=0;i < n-k+1;it++,i++){
		min1 = min(min1,it->second);
	}
	it=a.begin();
	for(;it != a.end();it++){
		if(it->second == min1){
			cout << it->first +1;
			break;
		}
			
	}
	
	return 0;
}
