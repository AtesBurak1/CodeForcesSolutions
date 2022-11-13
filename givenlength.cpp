#include <bits/stdc++.h>
using namespace std;

int* solve(int a,int b){
	int* ans=new int[2];
	ans[0]=ans[1]=-1;
	
	if(b==0  || (a==0 && b!=0)){
		return ans;
	}
	if(a==0 && b==0){
		ans[0]=ans[1]=0;
		return ans;
	}
	vector <int> temp(a,0);
	vector <int> temp1(a,0);
	temp[0] = temp1[0] = 1;
	b--;
	int h=b;
	int i=a-1;
		while(h>0){
		if(i==-1)
			return ans;
		if(i==0){
			if(h>=8){
				temp[i]=9;
				h-=8;
			}else{
				temp[i]=h+1;
				h=0;
			}
			i--;
		}
		else{
			if(h>=9){
			temp[i]=9;
			h-=9;
		}else{
			temp[i]=h;
			h=0;
		}
		i--;
		}
	}
	i=1;
	h=b;
	if(h>8){
		temp1[0]=9;
		h-=8;
	}else{
		temp1[0]=h+1;
		h=0;
	}
	while(h>0){
		if(i==a)
			return ans;
		if(h>=9){
			temp1[i]=9;
			h-=9;
		}else{
			temp1[i]=h;
			h=0;
		}
		i++;
	}
	int r=0,g=0;
	for(int i=0; i < a;i++){
		r*=10;
		g*=10;
		r+= temp[i];
		g += temp1[i]; 
	}
	if(g < r)
		g=r;
	ans[0]=r;
	ans[1]=g;
	return ans;
	
}
int main(){
	
	int a,b;
	cin >> a >> b;
	int* ans=new int[2];
	ans=solve(a,b);
    cout << ans[0] << " " << ans[1];
	
	return 0;
}
