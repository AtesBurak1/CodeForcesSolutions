#include <bits/stdc++.h>
using namespace std;

void solve() {
  char num[20];
  cin >> num;
  for(int i=0; i < strlen(num); i++){
  	if(num[i] < '5'){
	  }
	  else
	  	num[i]= '9' - num[i] + '0';
  }
  if(num[0] == '0')
  	num[0] = '9';
  cout <<  num;
}

int main() {
  
    solve();
 
  return 0;
}
