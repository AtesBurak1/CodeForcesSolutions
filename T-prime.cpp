#include <bits/stdc++.h>
#define MAX 1000000

using namespace std;

long long pow(long long int a,long long int b){
	return a*a;
}
bool prime[MAX+1];

void SieveOfEratosthenes()
{
  	memset(prime, true, sizeof(prime));
 
    for (int p=2; p*p<=MAX; p++)
    {
        // If prime[p] is not changed, then it is a prime
        if (prime[p] == true)
        {
            // Update all multiples of p
            for (int i=p*2; i<=MAX; i += p)
                prime[i] = false;
        }
    }
}

int main(){
	
	int t;
	cin >> t;
	SieveOfEratosthenes();
	while(t--){
		long long int e;
		cin >> e;
		long long int num= sqrt(e);
		if(pow(num,2) == e && e!=1 && prime[num])
			cout << "YES" << '\n';
		else
			cout << "NO" << '\n';
	}
	
	return 0;
}
