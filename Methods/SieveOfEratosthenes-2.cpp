#include<bits/stdc++.h>
using namespace std;

void sieveOfEratosthenes(int n){
	int prime[n+1]={};
	
	prime[1]=1;
	prime[2]=0;
	
	for(int i=2;i*i<=n;i++){
		if(!prime[i]){
			for(int k=i*i;k<=n;k+=i){
				prime[k]=0;
			}
		}
	}
	for(int i=1;i<=n;i++){
		cout<<i<<" is "<<prime[i]<<endl;
	}
}
int main(){
	int n;
	cin>>n;
	sieveOfEratosthenes(n);
}
