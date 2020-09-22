#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,mm;
    cin >> n >> mm;
    unordered_map<int,int> m;
    
    int ans = n;
    
    int grps = 0;
    int els = n;
    
    while(mm--){
    	int t, s;
    	cin >> t >> s;
    	
    	if(t!=s){
    		if( m.find(t)==m.end() || m.find(s)==m.end() ){
    		els -- ;
		}
		
		m[t]++; m[s]++;
		}
    	
    	
		
		cout << els  <<endl;
	}
	
}

