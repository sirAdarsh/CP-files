// Hare Krishna

#include<bits/stdc++.h>
#define ll long long
#define MOD 1000000009
using namespace std;

int getCost(int len, int x, int y){
	
	
	int cost1, cost2;
	
	if(len % 2){
		len--;
		cost1 = (len/2)*y;
		cost1 += x;
		
		len++;
		cost2 = len*x; 
	}
	else{
		cost1 = (len/2)*y;
		
		cost2 = len*x;
	}
	return min(cost1,cost2);
	
}


int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    int t;
    cin >> t;
    while(t--){
    	
    	int n,m,x,y;
    	cin >> n >> m >> x >> y;
    	
    	string row;
    	
    	int ans = 0;
    	
    	for(int i=0; i<n; i++){
    		
    		cin >> row;
    		
    		int len = 0;
    		
    		for(int j=0; j<row.size(); j++){
    			
    			if( row[j]=='*'){
    				ans += getCost(len, x, y);
    				len = 0;
				}
				else{
					len ++;
				}
			}
			
			if( len !=0 ){
				ans += getCost(len, x, y);
			}
			
		}
    	cout<<ans<<endl;
	}
    
}

