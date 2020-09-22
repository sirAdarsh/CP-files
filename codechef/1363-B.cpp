/*----- || Hare Krishna || -----*/

#include<bits/stdc++.h>
#define ll long long
#define MOD 1000000009
using namespace std;


int solve(string s, int sz){
	
	if(sz==1 || sz==2){
		return 0;
	}
	
	int first = s[0]-'0';
	int last = s[sz-1]-'0';
	
	int zerobw =0, onebw = 0;
	
	for(int i=1; i<sz-1; i++){
		if(s[i]-'0'==1){
			onebw ++;
		}
		else{
			zerobw ++;
		}
	}
	
	if( first == last ){
		if( first == 1 ){
			
			if(onebw==0){
				return 1;
			}
			
			return min(onebw+2, zerobw);
		}
		else{
			
			if(zerobw == 0){
				return 1;
			}
			
			return min(zerobw+2, onebw);
		}
	}
	else{
		
		return min(zerobw,onebw);
		
	}
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    int t;
    cin >> t;
    while(t--){
    	
    	string s;
    	cin >> s;
    	
    	int sz = s.size();
    	
    	cout << solve(s,sz)<<endl;
	}
    
}

