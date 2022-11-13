#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int n,m,a,b,sum=0;
	cin >> n>> m >> a >> b;
	if((double)b/m > a)
		cout << n*a;
	else if((n%m) * a > b)
		cout << (int)(n/m+1) * b ;
	else
		cout << (int)n/m * b + (n%m) * a;

	
	return 0;
}
