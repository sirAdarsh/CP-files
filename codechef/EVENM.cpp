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
    	int n;
    	cin >> n;
    	
    	int prev = 1;
    	
    	bool e = false;
    	
    	for(int i=0; i<n; i++){
    		
    		if(e){
    			
    			prev = prev+n;
    			
    			for(int i=0; i<n; i++){
    				cout << prev-i-1 <<" ";
				}
    			e=false;
    			
			}
    		
			else{
				for(int j=0; j<n;j++){
    				e = true;
    				cout << prev<< " ";
    				prev++;
				}
			}
			
			cout <<endl;
		}
    	
	}
    
}

