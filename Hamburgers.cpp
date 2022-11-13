#include <bits/stdc++.h>

#define ll 				long long int
#define ull 			unsigned long long int

using namespace std;

int main(){
	string rec;
	ll p1,p2,p3,n1,n2,n3,money;
	cin >> rec;
	cin >> n1 >> n2 >> n3;
	cin >> p1 >> p2 >> p3; 
	cin >> money;
	
	ll count =0,nb=0,ns=0,nc=0;
	for(int i=0;i<rec.length();i++){
		if(rec[i]=='B')
			nb++;
		else if(rec[i]=='S')
			ns++;
		else
			nc++;
	}
	int flag=1;
	int ind=0;
	while(flag){
		if((nb==0 || n1==0) && (ns==0 || n2==0) && (nc==0 || n3==0)){
			count+=money/(nb*p1+ns*p2+nc*p3);
			money=0;
		}

		if(n1>=nb){
			n1-=nb;
			ind++;
		}else if((nb-n1)*p1<=money){
			ind++;
			money-=(nb-n1)*p1;
			n1=0;
		}
		else
			break;
			
		if(n2>=ns){
			n2-=ns;
			ind++;
		}else if((ns-n2)*p2<=money){

			ind++;
			money-=(ns-n2)*p2;
						n2=0;
		}else
			break;
			
		if(n3>=nc){
			n3-=nc;
			ind++;
		}else if((nc-n3)*p3<=money){
	
			ind++;
			money-=(nc-n3)*p3;
					n3=0;
		}else
			break;
		
		if(ind==3){
			ind=0;
			count++;
		}
		else
			flag=0;
	}
	cout << count;
	
	return 0;
}
