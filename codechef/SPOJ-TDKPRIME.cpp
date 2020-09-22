#include<bits/stdc++.h>
#define size 90000001
#define maxN 90000000
using namespace std;

bool ar[size];



void sieve(vector<long> primes ){
	
	isNotPrime[0] = isNotPrime [1] = true;
	
	for(int i = 2; i*i <= maxN ; i++){
		
		if( !isNotPrime[i] ){
			
			for(int j = i*i ; j<=maxN ; j+=i){
				
				isNotPrime [j] = true;

			}
			
		}
		
	}
	
	for(int i=2;i<=maxN;i++){
		if(isNotPrime[i]){
			primes.push_back(i);
		}
	}
	
}
int main(){
	int t;
	cin >> t;
	vector<long> primes;
	while(t--){
		
		int n;
		cin >> n;
		sieve(primes);
		cout<<primes[n-1]<<endl;
		
	}
}
