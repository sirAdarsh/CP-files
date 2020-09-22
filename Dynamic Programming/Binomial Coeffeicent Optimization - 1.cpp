//binomial coeffecient with optiml substructur optimization
#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll binCoeff(int n, int k){
	ll C[n+1][k+1];
	int i, j;
	
	for(int i=0; i<=n ; i++){
		
		for( int j=0; j<=min(j,k); j++){
			
			if(j==0 || j==i){
				C[i][j] = 1;
			}
			else{
				C[i][j] = C[i-1][j] + C[i-1][j-1];
			}
		}
		
	}
	
	
	return C[n][k];
}
int main(){
	int n,k;
	cin >> n >> k;
	cout<<binCoeff(n,k)<<endl;
}

