#include<bits/stdc++.h>
#define ll long long
using namespace std;

int minDeletions(string s, int i, int j, unordered_map<string,int> lookup){
	
	string key = to_string(i) + "|" + to_string(j);
	
	if(i>=j){
		return 0;
	}
	
	if( lookup.find(key) == lookup.end() ){
		
		if( s[i] == s[j] ){
			lookup[key] = minDeletions(s,i+1,j-1,lookup);
		}
		else{
			lookup[key] = 1 + min(minDeletions(s,i+1,j,lookup), minDeletions(s,i,j-1,lookup));
		}
		
	}
	return lookup[key];
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string s = "ACBCDBAA";
    int n = s.size();
    unordered_map<string, int> lookup;
    cout << minDeletions(s,0,n-1,lookup)<<endl;
    
}

