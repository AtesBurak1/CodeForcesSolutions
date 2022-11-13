#include <bits/stdc++.h>

using namespace std;


int main(){
	

		int n;
		cin >> n;
		int arr[1000];
		int a=0,b=0,flag=1;
		for(int i=0; i < n; i++){
			cin >> arr[i];
		}
		int i=0,j=n-1;
		while(i<=j){
			if(flag){
				if(arr[i] > arr[j]){
					a+=arr[i];
					i++;
				}else{
					a+=arr[j];
					j--;
				}
				flag=0;
			}else{
				if(arr[i] > arr[j]){
					b+=arr[i];
					i++;
				}else{
					b+=arr[j];
					j--;
				}
				flag=1;
			}
		}
		cout << a << " " << b;
	
	
	
	return 0;
}
