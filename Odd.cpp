#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int t;
	cin >> t;
	while(t--){
		int a,b;
		cin >> a >> b;
		int odd=0,even=0,num;
		for(int i = 0 ; i < a; i++){
			cin >> num;
			if(num%2)
				odd++;
			else
				even++;
		}
		if(odd==0)
			cout << "No" << endl;
		else if(even==0){
			if(b%2)
				cout << "Yes" << '\n';
			else
					
		}
		else if(odd%2){
			if(even + odd >= b)
				cout << "Yes" << '\n';
			else
				cout << "No" << endl;
			
		}else{
			 if(even + odd >= b+1)
			 	cout << "Yes" << '\n';
			 else
				cout << "No" << endl;
		} 
				
			
	}
	
	return 0;
}
