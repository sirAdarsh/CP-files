/*----- || Hare Krishna || -----*/

#include<bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;
typedef unordered_map<int,bool> ma;

string solve( ma r, ma c, int n, int m){
	
	int chance=0;
	
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			
			if( r[i]==0 ){
				if(c[i]==0){
					chance++;
					r[i]=true;
					c[i]=true;
				}
			} 
			
		}
	}
	
	if(chance^1){
		return "Vivek";
	}
	else{
		return "Ashish";
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
    	int n,m;
    	cin >> n >> m;
    	int arr[n][m];
    	
    	unordered_map<int,bool> r;
    	unordered_map<int,bool> c;
    	
    	for(int i =0; i<n; i++){
    		for(int j=0; j<m; j++){
    			cin >> arr[i][j];
    			
    			if(arr[i][j]==1){
    				r[i]=true;
    			 c[j]=true;
				}
    			
    			
			}
		}
		
		cout << solve( r, c, n, m) << endl;
	}
}

