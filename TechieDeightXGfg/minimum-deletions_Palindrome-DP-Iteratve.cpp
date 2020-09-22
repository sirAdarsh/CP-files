#include<bits/stdc++.h>
#define ll long long
using namespace std;

int minDeletions(string X, int i, int j){
	
	string Y = X;
	reverse(Y.begin(),Y.end());
	
	int n = X.length();
	
	int lookup[i+1][j+1]; // stores the length of LCS of substring
	
	for(int i=0; i<=n; i++){
		lookup[i][0] = 0;
	}
	for(int j=0; j<=n; j++){
		lookup[0][j] = 0;
	}
	
	for(int i=1; i<=n; i++){
		
		for(int j=1; j<=n; j++){
			
			if( X[i-1] == Y[j-1] ){
				lookup[i][j] = lookup[i-1][j-1] + 1;
			}
			else{
				lookup[i][j] = max( lookup[i-1][j], lookup[i][j-1] );
			}
		}
		
	}
	return n - lookup[n][n];
	
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string X = "ACBCDBAA";
    int n = X.length();
    
    cout << "min number of deletions = "<<minDeletions(X,0,0);
        
}

