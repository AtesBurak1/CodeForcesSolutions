#include <bits/stdc++.h>

using namespace std;


int main(){
	
	int n,p;
	cin >> n;
	double sum=0;
	for(int i=0;i<n;i++){
		cin >> p;
		sum+=p;
	}
	sum=sum/n;
	printf("%.10f",sum);
	return 0;
}
