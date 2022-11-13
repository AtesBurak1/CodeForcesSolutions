#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		int num,sum=0;
		cin >> s >> num;
		string w(s);
		for(int i=0;i<w.size();i++)
				sum+= w[i] - 'a'+1;
		sort(w.rbegin(),w.rend());
		map<char,int> del;
		for(int i=0;i<w.size();i++){
			if(sum>num){
				del[w[i]]++;
                sum -= w[i] - 'a' + 1;
			}
		}
		for(int i=0;i<w.size();i++){
			 if (del[s[i]] > 0) {
                del[s[i]]--;
                continue;
            }
            cout << s[i];
        }
        cout << endl;
	}	
	return 0;
}
