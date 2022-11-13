#include <bits/stdc++.h>
#include <string.h>
using namespace std;


int main(){
	
	char s[100],s2[100];
	cin >> s >> s2;
	for(int i=0;i<sizeof(s);i++){
		tolower(s[i]);
		tolower(s2[i]);
	}
		printf("%s %s",s,s2);
	cout << strcmp(s,s2);
	
	
	return 0;
}
