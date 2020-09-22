/*----- || Hare Krishna || -----*/

#include<bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    int t;
    cin >> t;
    while(t--){
    	int n,k;
    	cin >> n >> k;
    	string s;
    	cin >> s;
    	
    	int count=0;
    	
    	int size=0;
    	bool met=false;
    	
    	// case when it starts with 0
    	
    	
    	if(s[0]=='0'){
    		bool e=false;
    	
	    	int sz=s.size();
	    	for(int i=1; i<=min(sz-1, k); i++){
	    		if(s[i]=='1'){
	    			e = true;
	    			break;
				}
			}
			
			if(!e){
				count++;
				s[0]='1';
			}
		}
    	
    	
    	for(int i=0; i<s.size(); i++){
    		if(s[i]=='0' && met==false ){
    			size++;
    			met=true;
			}
			else if(met && s[i]=='0'){
			
				size++;
				
			}
			else if(met && s[i]=='1'){
				size=0;
				met=false;
			}
			
			if(size==1+(2*k)){
				count++;
				met=false;
				size=0;
				s[i-k]='1';
				i = i-k;
			}
			
			
			if(i==s.size()-1 && met==true && size>k ){
				count++;
			}
			
		}
		
		
		cout<<count<<endl;
    	
	}
    
}

