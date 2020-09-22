// Prime factorization of a set of numbers
#include<bits/stdc++.h>
using namespace std;

vector<int> primes;
int a[100001]={};

void sieve(){
	
	a[0]=1;
	a[1]=1;
	for(int i=2;i*i<=100000;i++){
		for(int j=i*i;j<=100000;j+=i){
			if(a[j]==0){
				a[j]=1;
			}
		}
	}
	for(int i=0;i<=100000;i++){
		if(a[i]==0){
			primes.push_back(i);
		}
	}
	
	memset(a,0,sizeof(a));
	
}




int main(){
	int arr[]={3,9,15};
	sieve();
	
}
