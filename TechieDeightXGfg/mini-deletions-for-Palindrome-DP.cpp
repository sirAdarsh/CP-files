#include<bits/stdc++.h>
#define ll long long
using namespace std;

int minDeletions(string X, int i, int j, auto &lookup){
	
	// base case
	if(i>=j){
		return 0;
	}
	string key = to_string(i) + "|" + to_string(j); 
	
	if(lookup.find(key) == lookup.end()){
		
		if( X[i] == X[j] ){
			lookup[key] = minDeletions(X,i+1,j-1,lookup);
		}
		else{
			lookup[key] = min ( minDeletions(X,i+1,j,lookup),minDeletions(X,i,j-1,lookup) ) + 1;
		}
		
	}
	return lookup[key];
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string X = "ACBCDBAA";
    int n = X.length();
    
    // map to store  solutions of subptoblems
    unordered_map<string,int> lookup;
    
    cout << "The minimum number of deletions required are = "<<minDeletions(X,0,n-1,lookup);
}

