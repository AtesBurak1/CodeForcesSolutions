#include <bits/stdc++.h>

using namespace std;

int main(){
	
	
	int t;
	cin >> t;
	while(t--){
		int N;
		cin >> N;
		int* arr;
		int res=1;
		int flag{1},f{1};
		arr = new int[N];
		for(int i{0}; i < N; i++){
			cin >> arr[i];
			if(arr[i]%2 == 0)
				flag=0;
			else{
			     res= (res * arr[i]%2)%2;
			     f=0;
			}
			   
		}
		if(flag)
			cout << "-1\n";
		else if(f){
			cout << 0 << "\n";
		}else
		    cout << 1 << "\n";
		
		
		delete(arr);
	}
	
	return 0;
}
