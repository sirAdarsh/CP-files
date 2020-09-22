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
    	
    	string s;
    	cin >> s;
    	
    	int p=0;
    	int n = s.length();
    	for(int i=0; i<n-1; i++){
    		
    		if( s[i]=='x' ){
    			if(s[i+1]=='y'){
    				p++;
    				i++;
				}
			}
			else if(s[i]=='y'){
				if(s[i+1]=='x'){
					p++;
					i++;
				}
			}
			
			cout<<"i = "<<i<<endl;
    		
		}
		
		cout<<p<<endl;
    	
	}
    
}

