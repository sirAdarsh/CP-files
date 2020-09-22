#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define Pair pair<int,int>


int solve( string s, int l, int r, auto &lookup ){
	
	
	if( l>=r ){
		return 0;
	}
	
	if( lookup.find({l,r}) != lookup.end() ){
		return lookup[{l,r}];
	}
	
//	if( s[l] == s[] )	
	
	
	
	
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string s;
    s = "ACBCDBAA";
    
    unordered_map<Pair,int> lookup;
    solve(s,0,n-1,lookup);
    
}

