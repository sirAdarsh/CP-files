/*----- || Hare Krishna || -----*/

#include<bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;

int solve(string s, int n){
	
	int max_len = 0;
	
	int len = 0;
	
	unordered_map<char,int> m;
	
	int enc = 0;
	
	for(int i=0; i<n; i++){
		
		if( m.find(s[i]) != m.end() ){
			m.clear();
			if(len > max_len){
				max_len = len;
			}
			enc++;
			i = enc-1;
			len = 0;
			cout << " i = "<<i <<endl;
		}
		
		else{
			
			len++;
			m[s[i]]=1;
		}
		
	}
	
	if(len > max_len){
		max_len = len;
	}
	return max_len;
	
	
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    string s;
    cin >> s;
    
    cout << solve(s, s.length())<<endl;
    
}

